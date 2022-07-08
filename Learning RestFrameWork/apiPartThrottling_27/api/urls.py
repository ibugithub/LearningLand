from django.urls import path, include
from api import views
urlpatterns = [ 
    path('',views.StudentList.as_view()),
    # path('',views.CreateStudent.as_view()),
    path('<int:pk>/', views.RetrieveStudent.as_view()),
    # path('<int:pk>/', views.UpdateStudent.as_view()),
    path('', include('rest_framework.urls', namespace='rest_framework')),
    path('<int:pk>/', views.DeleteStudent.as_view()),
]