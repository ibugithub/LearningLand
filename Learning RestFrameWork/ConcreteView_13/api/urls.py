from django.urls import path
from api import views
urlpatterns = [ 
    path('',views.LCStudent.as_view()),

    path('<int:pk>/', views.RUDStudent.as_view()),
]