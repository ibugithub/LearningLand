from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer
from rest_framework.response import Response
from rest_framework import status




class StudentApi(viewsets.ViewSet):
    def list(self, request): 

        # # *****Here all the attribute of this viewset class you can use this action for any sepcific logic ****
        print( "*************** List *****************") 
        print(f"BaseName : {self.basename}")
        print(f"Action : {self.action}")
        print(f"Detail : {self.detail}") 
        print(f"Suffix : {self.suffix}") 
        print(f"Name : {self.name}") 
        print(f"Description : {self.description}")
        student = Student.objects.all() 
        serializer = Student_Serializer(student, many = True)  
        return Response(serializer.data) 

    def retrieve(self, request, pk = None):
         # # *****Here all the attribute of this viewset class you can use this action for any sepcific logic ****
        print( "*************** retrieve *****************") 
        print(f"BaseName : {self.basename}")
        print(f"Action : {self.action}")
        print(f"Detail : {self.detail}") 
        print(f"Suffix : {self.suffix}") 
        print(f"Name : {self.name}") 
        print(f"Description : {self.description}")
        if pk is not None:
            student = Student.objects.get(id = pk) 
            serialized_data = Student_Serializer(student) 
            return Response(serialized_data.data)
 
    def create(self, request):
         # # *****Here all the attribute of this viewset class you can use this action for any sepcific logic ****
        print( "*************** create *****************") 
        print(f"BaseName : {self.basename}")
        print(f"Action : {self.action}")
        print(f"Detail : {self.detail}") 
        print(f"Suffix : {self.suffix}") 
        print(f"Name : {self.name}") 
        print(f"Description : {self.description}")
        serialized_data = Student_Serializer(data = request.data) 
        if serialized_data.is_valid():
            serialized_data.save() 
            return Response("Data has been created", status = status.HTTP_201_CREATED)
        return Response(serialized_data.errors, status = status.HTTP_400_BAD_REQUEST)
    
    def update(self, request, pk = None): 
         # # *****Here all the attribute of this viewset class you can use this action for any sepcific logic ****
        print( "*************** update *****************") 
        print(f"BaseName : {self.basename}")
        print(f"Action : {self.action}")
        print(f"Detail : {self.detail}") 
        print(f"Suffix : {self.suffix}") 
        print(f"Name : {self.name}") 
        print(f"Description : {self.description}")
        student = Student.objects.get(id = pk) 
        serialized_student = Student_Serializer(student, data = request.data) 
        if serialized_student.is_valid():
            serialized_student.save()
            return Response("Data has been fully updated")  
        return Response(serialized_student.errors, status = status.HTTP_400_BAD_REQUEST) 
    

    def partial_update(self, request, pk = None):
         # # *****Here all the attribute of this viewset class you can use this action for any sepcific logic ****
        print( "*************** partial update *****************") 
        print(f"BaseName : {self.basename}")
        print(f"Action : {self.action}")
        print(f"Detail : {self.detail}") 
        print(f"Suffix : {self.suffix}") 
        print(f"Name : {self.name}") 
        print(f"Description : {self.description}")
        student = Student.objects.get(id = pk)
        serialized_data = Student_Serializer(student, data = request.data, partial = True) 
        if serialized_data.is_valid():
            serialized_data.save() 
            return Response("data has been updated partially" ) 
        return Response(serialized_data.errors, status = status.HTTP_400_BAD_REQUEST) 

    def destroy(self, request, pk = None):
         # # *****Here all the attribute of this viewset class you can use this action for any sepcific logic ****
        print( "*************** destroy *****************") 
        print(f"BaseName : {self.basename}")
        print(f"Action : {self.action}")
        print(f"Detail : {self.detail}") 
        print(f"Suffix : {self.suffix}") 
        print(f"Name : {self.name}") 
        print(f"Description : {self.description}")
        student = Student.objects.get(id = pk)
        student.delete()
        return Response("data has been deleted")
    
