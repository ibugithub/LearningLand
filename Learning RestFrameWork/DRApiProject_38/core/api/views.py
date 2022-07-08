from core.models import CrudModel 
from .serializers import CrudModelSerializer 
from rest_framework import viewsets

class api(viewsets.ModelViewSet):
    queryset = CrudModel.objects.all() 
    serializer_class = CrudModelSerializer 
    