from rest_framework import viewsets 
from .models import Student 
from .serializers import Student_Serializer
from rest_framework.authentication import SessionAuthentication
from rest_framework.permissions import IsAuthenticated, IsAuthenticatedOrReadOnly
from rest_framework.throttling import AnonRateThrottle, UserRateThrottle
from .throttling import StudentApiThrottling 


#  ***** By the ModelViewSet Class This api will be both Readable and writable ******
class StudentModelViewApi(viewsets.ModelViewSet):
    queryset = Student.objects.all() 
    serializer_class = Student_Serializer   
    authentication_classes = [SessionAuthentication] 
    # permission_classes = [IsAuthenticated]
    permission_classes = [IsAuthenticatedOrReadOnly]
    throttle_classes = [AnonRateThrottle, StudentApiThrottling]
 



# # httpie commands >>> 
# # for getting access and refresh token >>>>
# http POST http://127.0.0.1:8000/gettoken/ username="user1" password="amijanina"

# # for verifying token >>>> 
# http POST http://127.0.0.1:8000/verifytoken/ token="" 

# # for getting new access token by passing refresh token >>>> 
# http POST http://127.0.0.1:8000/ refresh=""

# # for sending get request >>>> 
# http http:127.0.0.1:8000/api/ "Authorization:Bearer 'here will be the access token' " 

# # for sending POST request >>>> 
# http http:127.0.0.1:8000/api/ name=... roll=... city=... "Authorization:Bearer 'here will be the access token' " 
# # for sending PUT request >>>> 
# http http:127.0.0.1:8000/api/ name=... roll=... city=... "Authorization:Bearer 'here will be the access token' " 
# # for sending PATCH request >>>> 
# http http:127.0.0.1:8000/api/ name=... ... "Authorization:Bearer 'here will be the access token' " 

# # for DELETE POST request >>>> 
# http http:127.0.0.1:8000/api/ name=... roll=... city=... "Authorization:Bearer 'here will be the access token' "

