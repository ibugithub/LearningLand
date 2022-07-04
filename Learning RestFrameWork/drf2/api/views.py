from xml.dom.minidom import TypeInfo
from django.http import HttpResponse
from django.shortcuts import render
from django.views.decorators.csrf import csrf_exempt
from rest_framework.parsers import JSONParser
from rest_framework.renderers import JSONRenderer
import io
from .serializers import BookSerializers
from django.http import HttpResponse 

# Create your views here.

@csrf_exempt
def create_book(request):
    if request.method == "POST":
        print(f"The request has been come...")
        jsonBook = request.body 
        print(f" The coming data is {jsonBook} \n The type of jsonBook is {type(jsonBook)}") 
        streamBook =  io.BytesIO(jsonBook) 
        print(f"The stream data is {streamBook} \n The type of the streamBook is {type(streamBook)}")
        pythonBook = JSONParser().parse(streamBook) 
        serializerBook = BookSerializers(data = pythonBook) 
        if serializerBook.is_valid():
            serializerBook.save() 
            print("now the data will be created")
            response  = {"msg" : "data created"} 
            jsonResponse = JSONRenderer().render(response)
            return HttpResponse(jsonResponse, content_type = "application/json") 
        jsonError = JSONRenderer().render(serializerBook.errors) 
        print("some Error has been found")
        return HttpResponse(jsonError, content_type = "application/json")
