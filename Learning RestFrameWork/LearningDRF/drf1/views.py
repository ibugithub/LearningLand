from django.shortcuts import render
from .models import Book
# Create your views here.

def home(request):
    print("The Book is ", Book)
    print("The type of Book is ", type(Book))

    book = Book.objects.all()
    print("The book is ", book) 
    print("The type of book is ", type(book))
    return render(request, 'drf1/home.html')

