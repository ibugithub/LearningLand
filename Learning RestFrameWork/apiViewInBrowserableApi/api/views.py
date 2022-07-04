from functools import partial
from urllib import response
from django.shortcuts import render
from rest_framework.decorators import api_view 
from rest_framework.response import Response
from .serializers import Student_Serializer
from .models import Student
from rest_framework import status

# Create your views here.


@api_view(['GET', 'POST', 'PUT', 'PATCH','DELETE']) 
def StudentApi(request, pk = None):
    if request.method == 'GET': 
         
        id = pk
        print(f"The id is {id}")
        if id != None:
            student = Student.objects.get(id = id)
            serialized_student = Student_Serializer(student)
        else:
            student = Student.objects.all()
            serialized_student = Student_Serializer(student, many = True)
        return Response(serialized_student.data, status = status.HTTP_200_OK) 
    
    if request.method == 'POST': 
        serializer = Student_Serializer(data = request.data)
        if serializer.is_valid():
            serializer.save()
            return Response("Data has been created", status = status.HTTP_201_CREATED) 
        return Response(serializer.errors, status = status.HTTP_400_BAD_REQUEST) 

    
    if request.method == 'PUT': 
        id = pk
        student = Student.objects.get(pk = id) 
        serialized_student = Student_Serializer(student, data = request.data) 
        if serialized_student.is_valid():
            serialized_student.save()
            return Response("Data fully updated")
        return Response(serialized_student.errors, status = status.HTTP_400_BAD_REQUEST)

    if request.method == 'PATCH': 
        id = pk
        student = Student.objects.get(pk = id) 
        serialized_student = Student_Serializer(student, data = request.data, partial = True) 
        if serialized_student.is_valid():
            serialized_student.save()
            return Response("Data partially updated")
        return Response(serialized_student.errors, status = status.HTTP_400_BAD_REQUEST)    


    if request.method == 'DELETE':
        id = pk
        student = Student.objects.get(id = id) 
        student.delete()
        return Response('items deleted')
    
    