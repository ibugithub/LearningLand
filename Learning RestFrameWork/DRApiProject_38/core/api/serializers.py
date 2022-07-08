from core.models import CrudModel  
from rest_framework import serializers


class CrudModelSerializer(serializers.ModelSerializer):
    class Meta:
        model = CrudModel 
        fields  = ['id', 'name', 'email', 'password']