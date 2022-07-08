from django.shortcuts import render

from rest_framework import viewsets
from .models import Singer, Song 
from .serializers import singerSerializer, songSerializer 
from .pagination import MyCursorPagination

# Create your views here.

class SingerViewset(viewsets.ModelViewSet):
    queryset = Singer.objects.all()
    serializer_class = singerSerializer 


class SongViewset(viewsets.ModelViewSet):
    queryset = Song.objects.all()
    serializer_class = songSerializer



  