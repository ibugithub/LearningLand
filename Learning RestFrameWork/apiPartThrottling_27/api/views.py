# GenericAPIView and Model Mixin 
from .models import Student
from .serializers import Student_Serializer 
from rest_framework.authentication import SessionAuthentication
from rest_framework.permissions import IsAuthenticated, IsAuthenticatedOrReadOnly
from rest_framework.generics import ListAPIView, CreateAPIView, RetrieveAPIView, UpdateAPIView, DestroyAPIView
from rest_framework.throttling import ScopedRateThrottle 

class StudentList(ListAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 
    authentication_classes = [SessionAuthentication]
    permission_classes = [IsAuthenticated]
    throttle_classes = [ScopedRateThrottle]
    throttle_scope = 'studentList'

     
    
class CreateStudent(CreateAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 


class RetrieveStudent(RetrieveAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 
    throttle_classes = [ScopedRateThrottle]
    throttle_scope = 'studentRetrieve'


class UpdateStudent(UpdateAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 


class DeleteStudent(DestroyAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer









