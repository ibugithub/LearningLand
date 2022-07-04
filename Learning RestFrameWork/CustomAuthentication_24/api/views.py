from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer
from .authentication import CustomAuthentication
from rest_framework.permissions import IsAuthenticated, IsAuthenticatedOrReadOnly


#  ***** By the ModelViewSet Class This api will be both Readable and writable ******
class StudentModelViewApi(viewsets.ModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer   
    authentication_classes = [CustomAuthentication] 
    # permission_classes = [IsAuthenticated]
    permission_classes = [IsAuthenticatedOrReadOnly]
 

# # Command for testing ...  
# # in browser searchbar ...
# http://127.0.0.1:8000/api/?username=ibu 