from django.urls import path
from drf1 import views
urlpatterns = [ 
    path('bookinfo/<int:pk>', views.Book_Detail, name = 'bookinfo'),
    path('booklist/', views.BookList, name = 'booklist')
]