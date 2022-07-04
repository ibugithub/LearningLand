from django.urls import path
from api import views
urlpatterns = [ 
    path('', views.StudentList.as_view()),
    # path('',views.CreateStudent.as_view()),
    # path('<int:pk>/', views.RetrieveStudent.as_view()),
    path('<int:pk>/', views.UpdateStudent.as_view()),
    # path('<int:pk>/', views.DestroyStudent.as_view()),
    
]