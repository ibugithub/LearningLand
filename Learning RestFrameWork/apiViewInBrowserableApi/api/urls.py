from django.urls import path 
from api import views
urlpatterns = [ 
    path('', views.StudentApi),
    path('<int:pk>/', views.StudentApi)
]