from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer
from rest_framework.authentication import BasicAuthentication 
from rest_framework.permissions import IsAuthenticated, AllowAny, IsAdminUser, IsAuthenticatedOrReadOnly


#  ***** By the ModelViewSet Class This api will be both Readable and writable ******
class StudentModelViewApi(viewsets.ModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer  
 
    # # **** Global authentication in setting could be override here ****
    authentication_classes = [BasicAuthentication]  
    # permission_classes = [AllowAny]
    permission_classes = [IsAuthenticatedOrReadOnly]



