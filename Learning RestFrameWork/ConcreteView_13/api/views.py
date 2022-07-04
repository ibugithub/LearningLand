# GenericAPIView and Model Mixin 
from .models import Student
from .serializers import Student_Serializer 
from rest_framework.generics import ListCreateAPIView, RetrieveUpdateDestroyAPIView, RetrieveUpdateAPIView, RetrieveDestroyAPIView


class LCStudent(ListCreateAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer



# # ...... This combination could also be used ....
# class RUStudent(RetrieveUpdateAPIView):
#     queryset = Student.objects.all() 
#     serializer_class = Student_Serializer 


# class RDStudent(RetrieveDestroyAPIView):
#     queryset = Student.objects.all() 
#     serializer_class = Student_Serializer



class RUDStudent(RetrieveUpdateDestroyAPIView):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 