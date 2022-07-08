from rest_framework import serializers
from .models import Song, Singer 

class singerSerializer(serializers.ModelSerializer): 
    # song = serializers.StringRelatedField(many=True, read_only=True)
    # song = serializers.PrimaryKeyRelatedField(many=True, read_only=True)
    # song = serializers.HyperlinkedRelatedField(many = True, read_only=True, view_name='song-detail')  
    song = serializers.SlugRelatedField(many = True, read_only = True, slug_field = 'title') 
    # song = serializers.SlugRelatedField(many = True, read_only = True, slug_field = 'duration') 
    # song = serializers.HyperlinkedIdentityField(view_name = 'song-detail')
    class Meta: 
        model = Singer 
        fields = ['id', 'name', 'gender', 'song'] 
         
class songSerializer(serializers.ModelSerializer):
    singer = serializers.SlugRelatedField( read_only = True, slug_field = 'name') 
    class Meta:
        model = Song 
        fields = ['id', 'title', 'duration', 'singer']

