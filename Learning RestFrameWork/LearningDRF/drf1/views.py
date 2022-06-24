from django.http import HttpResponse, JsonResponse
from django.shortcuts import render
from .models import Book 
from .serializers import BookSerializer 
from rest_framework.renderers import JSONRenderer 


# Create your views here.

# ....Mode object Single book object....  

def Book_Detail(request, pk):
    book = Book.objects.get(id = pk)  
    serializedBook = BookSerializer(book)

    # # ......Python way of doing it....
    # jsonedBook = JSONRenderer().render(serializedBook.data)
    # return HttpResponse(jsonedBook, content_type = "application/json")

    # ............Django way of doing it just in one line..........
    return JsonResponse(serializedBook.data )

def BookList(request):
    book = Book.objects.all() 
    serializedBook = BookSerializer(book, many = True)

    # # ......Python way of doing it....
    # jsonedBook = JSONRenderer().render(serializedBook.data)
    # return HttpResponse(jsonedBook, content_type =("application/json"))


    # ............Django way of doing it just in one line..........
    return JsonResponse(serializedBook.data, safe = False)