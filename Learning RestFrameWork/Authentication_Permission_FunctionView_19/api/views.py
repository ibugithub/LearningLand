from functools import partial
from urllib import response
from django.shortcuts import render
from rest_framework.response import Response
from rest_framework.authentication  import BasicAuthentication 
from rest_framework.permissions import IsAuthenticated
from rest_framework.decorators import api_view, authentication_classes, permission_classes


from .serializers import Student_Serializer
from .models import Student
# Create your views here.


@api_view(['GET', 'POST', 'PUT', 'DELETE']) 
@authentication_classes([BasicAuthentication]) 
@permission_classes([IsAuthenticated])
def StudentApi(request):
    if request.method == 'GET': 
        id = request.data.get("id") 
        if id != None:
            student = Student.objects.get(id = id)
            serialized_student = Student_Serializer(student)
        student = Student.objects.all()
        serialized_student = Student_Serializer(student, many = True)
        return Response(serialized_student.data)
    
    if request.method == 'POST': 
        serializer = Student_Serializer(data = request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data) 
        return Response(serializer.errors) 

    
    if request.method == 'PUT': 
        old_name = request.data.get('oldName')
        new_data = request.data.get('newData')
        student = Student.objects.get(name = old_name) 
        serialized_student = Student_Serializer(student, data = new_data, partial = True) 
        if serialized_student.is_valid():
            serialized_student.save()
            return Response(serialized_student.data)
        return Response(serialized_student.errors)


    if request.method == 'DELETE':
        name = request.data.get('name')
        student = Student.objects.get(name = name) 
        student.delete()
        return Response('items deleted')
    
    