from django.urls import path, include
from . import views
urlpatterns = [
    path('', views.StudentList.as_view(), name = 'studentList'),
     path('auth/', include('rest_framework.urls', namespace = 'rest_framework'))
]