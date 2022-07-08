from rest_framework import serializers
from .models import Song, Singer 
         
class songSerializer(serializers.ModelSerializer):
    class Meta:
        model = Song 
        fields = ['id', 'title', 'duration', 'singer']


class singerSerializer(serializers.ModelSerializer): 
    song = songSerializer(many = True, read_only = True)
    class Meta: 
        model = Singer 
        fields = ['id', 'name', 'gender', 'song'] 