from functools import partial
from django.shortcuts import render, HttpResponse
from rest_framework.renderers import JSONRenderer 
from rest_framework.parsers import JSONParser
import io 
from .models import Student
from .serializers import Student_Serializer
from django.views.decorators.csrf import csrf_exempt
from django.utils.decorators import method_decorator
from django.views import View

# Create your views here.
 

def index(request):
    return HttpResponse("hellow world") 
 

@method_decorator(csrf_exempt, name='dispatch')
class StudentApi(View):
    def get(self, request, *args, **kwargs):
        json_data = request.body
        print(json_data)
        stream_data = io.BytesIO(json_data) 
        print(f"The stream data is {stream_data}") 
        python_dict_data = JSONParser().parse(stream_data) 
        print(f"The python data is {python_dict_data} type is {type(python_dict_data)}")
        id = python_dict_data.get('id', None) 
        print(f"The id is {id}")

        if id is not None:
            print(f"request come with id {id}") 
            student = Student.objects.get(id = id)
            print(f"The student is {student} And its type is {type(student)}") 
            serializedStudent = Student_Serializer(student)
            print(f"The serializedstudent is {serializedStudent} \nAnd its type is {type(serializedStudent)}")
            print(f"The serializedstudent is {serializedStudent.data} \n And its type is {type(serializedStudent.data)}")
            jsonedStudent = JSONRenderer().render(serializedStudent.data)
            return HttpResponse(jsonedStudent, content_type = 'application/json')

        else:
            print(f"request come without id {id}")
            allStudent = Student.objects.all() 
            print(f"All the student are {allStudent} And it's type is {type(allStudent)}")
            serialized_all_students = Student_Serializer(allStudent, many = True)
            json_all_students = JSONRenderer().render(serialized_all_students.data)
            return HttpResponse(json_all_students, content_type = "application/json") 
    
    def post(self, request, *args, **kwargs):
        student_data = request.body 
        student_stream = io.BytesIO(student_data) 
        student_pythoned = JSONParser().parse(student_stream)
        serialized_student = Student_Serializer(data = student_pythoned) 
        if serialized_student.is_valid():
            serialized_student.save()
            response = {"msg": "your student has been created"}
            JsonResponse= JSONRenderer().render(response) 
            return HttpResponse(JsonResponse, content_type = "application/json")
        else:
            jsonError = JSONRenderer().render(serialized_student.errors) 
            return HttpResponse(jsonError, content_type = "application/json")


    def put(self, request, *args, **kwargs):
        stream_data = io.BytesIO(request.body)
        python_update_data = JSONParser().parse(stream_data)
        print(f"{python_update_data}")
        instance = python_update_data["oldName"]
        update_data =  python_update_data['newData']
        studentInstance = Student.objects.get(name = instance)
        serialized_updated_data = Student_Serializer(studentInstance, data = update_data, partial = True)
        if serialized_updated_data.is_valid():
            serialized_updated_data.save()
            print(f"The old data is {instance}") 
            print(f"The update data is {update_data}") 
            response = "your data update successfully"
        else:
            response = serialized_updated_data.errors
        return HttpResponse(JSONRenderer().render(response))

    
    def delete(self, request, *args, **kwargs):
        name = request.body
        print(f"The name is {name}")
        stream = io.BytesIO(name)
        python_name = JSONParser().parse(stream) 
        name = python_name['name']
        instance = Student.objects.get(name = name)
        instance.delete() 
        r = "your data is deleted"
        response = JSONRenderer().render(r)
        return HttpResponse(response, content_type = "application/json")

