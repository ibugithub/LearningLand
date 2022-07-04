from django.urls import path
from api import views
urlpatterns = [ 
    path('', views.StudentApi1.as_view()),
    path('',views.StudentApi1.as_view()),
    path('<int:pk>/', views.StudentApi2.as_view()),

    
]