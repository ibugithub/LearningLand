from django.http import HttpResponse
from django.shortcuts import render
from django.views.decorators.csrf import csrf_exempt
import io
# Create your views here.

@csrf_exempt
def create_book(request):
    if request.method == "POST":
        print(f"The request has been come...")
        jsonBook = request.body 
        print(f" The coming data is {jsonBook}") 
        streamBook =  io.BytesIO(jsonBook) 
        pythonBook = JSONParser.parse(  )





    print(f"The request.method is {request.method}")
    return HttpResponse("hello")
    
