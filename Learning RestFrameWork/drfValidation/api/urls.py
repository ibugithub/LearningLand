from django.urls import path,include 
from api import views


urlpatterns = [
    path("", views.index, name = "index"),
    path("studentapi/", views.StudentApi.as_view(), name = "studentapi"),
]