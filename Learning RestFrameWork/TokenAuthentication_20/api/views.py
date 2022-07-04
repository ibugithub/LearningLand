from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer


#  ***** By the ModelViewSet Class This api will be both Readable and writable ******
class StudentModelViewApi(viewsets.ModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer  
 



# ... Use this command in commandline to send post request to the "127.0.0.1:8000/gettoken/" for creating token.. 
# http POST http://127.0.0.1:8000/gettoken/ username="User" password="amijanina"
