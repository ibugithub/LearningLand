from functools import partial
from urllib import response
from django.shortcuts import render
from rest_framework.decorators import api_view 
from rest_framework.response import Response
from .serializers import Student_Serializer
from .models import Student
from rest_framework import status
from rest_framework.views import APIView

# Create your views here.

class StudentApi(APIView):
    def get(self, request,pk = None, format = None):
        if pk != None:
            student = Student.objects.get(id = pk)
            serialized_student = Student_Serializer(student) 
        else:
            student = Student.objects.all() 
            serialized_student = Student_Serializer(student, many = True) 
        return Response(serialized_student.data) 
    
    def post(self, request, format = None):
        data = request.data 
        serialized_data = Student_Serializer(data = data) 
        if serialized_data.is_valid():
            serialized_data.save()
            return Response("data has been created", status = status.HTTP_201_CREATED) 
        return Response(serialized_data.errors, status = status.HTTP_400_BAD_REQUEST)

    
    def put(self, request, pk = None, format = None):
        data = request.data 
        student = Student.objects.get(id = pk)
        serialized_data = Student_Serializer(student, data = data) 
        if serialized_data.is_valid():
            serialized_data.save()
            return Response("data has been fully updated", status = status.HTTP_201_CREATED) 
        return Response(serialized_data.errors, status = status.HTTP_400_BAD_REQUEST) 

    def patch(self, request, pk = None, format = None):
        data = request.data 
        student = Student.objects.get(id = pk)
        serialized_student = Student_Serializer(student, data = data, partial = True) 
        if serialized_student.is_valid():
            serialized_student.save()
            return Response("data has been partially updated", status = status.HTTP_201_CREATED) 
        return Response(serialized_student.errors, status = status.HTTP_400_BAD_REQUEST)

    def delete(self, request, pk = None, foramt = None):
        student = Student.objects.get(id = pk) 
        student.delete() 
        return Response('data has been deleted', status = status.HTTP_202_ACCEPTED)















