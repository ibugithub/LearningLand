from django.urls import path,include 
from api import views


urlpatterns = [
    path("", views.index, name = "index"),
    path("studentapi/", views.StudentApi, name = "studentapi"),
    path("create/", views.create, name = "create"),
    path('update/', views.update, name = "update"),
    path("delete/", views.delete, name = 'delete')
]