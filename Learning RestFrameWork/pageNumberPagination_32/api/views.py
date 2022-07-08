from django.shortcuts import render
from .serializers import StudentSerializer
from rest_framework.generics import ListAPIView 
from .models import Student 
from .pagination import MyPagination
# Create your views here.

class StudentList(ListAPIView):
    queryset = Student.objects.all() 
    serializer_class = StudentSerializer 
    pagination_class = MyPagination



  