from django.urls import path, include
from rest_framework.routers import DefaultRouter 
from . import views

router = DefaultRouter()
router.register('singer', views.SingerViewset, basename='singer') 
router.register('song', views.SongViewset, basename='song')



urlpatterns = [
    path('', include(router.urls)),
     path('auth/', include('rest_framework.urls', namespace = 'rest_framework'))
]