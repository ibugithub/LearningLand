from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer
from rest_framework.authentication import SessionAuthentication
from rest_framework.permissions import IsAuthenticated, AllowAny, IsAdminUser, IsAuthenticatedOrReadOnly, DjangoModelPermissions, DjangoModelPermissionsOrAnonReadOnly


#  ***** By the ModelViewSet Class This api will be both Readable and writable ******
class StudentModelViewApi(viewsets.ModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer  
 
    # # **** Global authentication in setting could be override here ****
    authentication_classes = [SessionAuthentication]  
    # permission_classes = [IsAuthenticated] 
    # permission_classes = [AllowAny] 
    # permission_classes = [IsAdminUser]
    # permissin_classes = [IsAuthenticatedOrReadOnly]
    # permission_classes = [DjangoModelPermissions] 
    permission_classes = [DjangoModelPermissionsOrAnonReadOnly]



