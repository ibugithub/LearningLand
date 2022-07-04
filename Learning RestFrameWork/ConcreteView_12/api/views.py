# GenericAPIView and Model Mixin 
from .models import Student
from .serializers import Student_Serializer 
from rest_framework.generics import ListAPIView, CreateAPIView, RetrieveAPIView, UpdateAPIView, DestroyAPIView

class StudentList(ListAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 
     
    
class CreateStudent(CreateAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 


class RetrieveStudent(RetrieveAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 


class UpdateStudent(UpdateAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 


class DeleteStudent(DestroyAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer









