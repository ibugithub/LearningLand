from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer
from rest_framework.authentication import TokenAuthentication 
from rest_framework.permissions import IsAuthenticated, IsAuthenticatedOrReadOnly


#  ***** By the ModelViewSet Class This api will be both Readable and writable ******
class StudentModelViewApi(viewsets.ModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer   
    authentication_classes = [TokenAuthentication] 
    # permission_classes = [IsAuthenticated]
    permission_classes = [IsAuthenticatedOrReadOnly]
 

# # ..... commands for accessing the api .... 
# Get request ====> http http://127.0.0.1:8000/api/ 'Authorization:Token 34b5747ba108956e9a8d74ff53937764f25ceee6'
# Post request ====> http -f POST http://127.0.0.1:8000/api/ name=Rakib roll=1747 c
# ity=dhaka 'Authorization:Token 34b5747ba108956e9a8d74ff53937764f25ceee6'