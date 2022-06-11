from django.urls import path
from drf1 import views
urlpatterns = [ 
    path('', views.home, name = 'home')
]