from django.urls import path, include 
from . import views
urlpatterns = [ 
    path('', views.add_show.as_view(), name= 'add_show'),
    # path('',views.add_show, name='add_show'),
    path('del/<int:id>/', views.delete_data.as_view(), name= 'deletedata'),
    # path('del/<int:id>/', views.delete_data, name = 'deletedata'),
    path('upd/<int:id>/', views.update_data.as_view(), name='updatedata'),
    # path('upd/<int:id>/', views.update_data, name='updatedata'),
]