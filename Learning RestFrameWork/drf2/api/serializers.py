from rest_framework import serializers 
from .models import Book


class BookSerializers(serializers.Serializer):
    title = serializers.CharField(max_length = 100) 
    author = serializers.CharField(max_length = 100) 
    published_date = serializers.DateTimeField() 

    def create(self, validate_data):
        return Book.objects.create(validate_data)