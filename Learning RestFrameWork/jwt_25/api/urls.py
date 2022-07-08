from django.urls import path, include
from api import views
from rest_framework.routers import DefaultRouter  
from rest_framework_simplejwt.views import TokenObtainPairView, TokenRefreshView, TokenVerifyView


# ...... Creating Router Objects ........ 
router = DefaultRouter()

# Registering with router ......
router.register("api", views.StudentModelViewApi, basename = 'readwriteapi')


urlpatterns = [ 
    path('', include(router.urls)), 
    path('gettoken/', TokenObtainPairView.as_view(), name= 'token_obtain'),
    path('refreshtoken/', TokenRefreshView.as_view(), name = 'refresh_token'), 
    path('verifytoken/', TokenVerifyView.as_view(), name= 'token_verify')
] 

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