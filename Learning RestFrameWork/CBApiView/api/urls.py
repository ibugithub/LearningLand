from django.urls import path 
from api import views
urlpatterns = [ 
    path('', views.StudentApi.as_view()),
    path('<int:pk>/', views.StudentApi.as_view())
]