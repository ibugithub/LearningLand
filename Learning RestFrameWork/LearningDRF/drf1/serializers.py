from rest_framework import serializers 

class BookSerializer(serializers.Serializer):
    id = serializers.IntegerField()
    name = serializers.CharField(max_length = 100)
    author = serializers.CharField(max_length = 100)
    published_Date = serializers.DateField()