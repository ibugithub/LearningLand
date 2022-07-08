from django.urls import path, include
from rest_framework.routers import DefaultRouter
from . import views

router = DefaultRouter()
router.register('api', views.StudentApi, basename = 'student')

urlpatterns = [
    path('', include(router.urls), name = 'studentList'),
    path('auth/', include('rest_framework.urls', namespace = 'rest_framework'))
]