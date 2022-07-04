from django.urls import path, include
from api import views
from rest_framework.routers import DefaultRouter  



# ...... Creating Router Objects ........ 
router = DefaultRouter()

# Registering with router ......
router.register("api", views.StudentModelViewApi, basename = 'readwriteapi')


urlpatterns = [ 
    path('', include(router.urls)),
]