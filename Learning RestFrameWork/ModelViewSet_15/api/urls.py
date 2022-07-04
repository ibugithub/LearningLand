from django.urls import path, include
from api import views
from rest_framework.routers import DefaultRouter 



# ...... Creating Router Objects ........ 
RWrouter = DefaultRouter()
Rrouter = DefaultRouter()

# Registering with router ......
RWrouter.register("api", views.StudentModelViewApi, basename = 'readwriteapi')
Rrouter.register("api", views.StudentReadOnlyModelViewApi, basename="readonlyapi")


urlpatterns = [ 
    path('readwrite', include(RWrouter.urls)),
    path('read', include(Rrouter.urls))
]