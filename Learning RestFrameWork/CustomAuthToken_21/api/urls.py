from django.urls import path, include
from api import views
from rest_framework.routers import DefaultRouter  
from .auth import CustomAuthToken



# ...... Creating Router Objects ........ 
router = DefaultRouter()

# Registering with router ......
router.register("api", views.StudentModelViewApi, basename = 'readwriteapi')


urlpatterns = [ 
    path('', include(router.urls)), 

    # # This path will give me the builtin login and logout functionality
    path('auth/', include('rest_framework.urls', namespace = 'rest_framework')),
    path('gettoken/', CustomAuthToken.as_view())
]