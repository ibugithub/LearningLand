from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer
  


#  ***** By the ModelViewSet Class This api will be both Readable and writable ******
class StudentModelViewApi(viewsets.ModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 



#  ***** By the ReadOnlyModelViewSet Class This api will just be Readable******
class StudentReadOnlyModelViewApi(viewsets.ReadOnlyModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer 