from django.contrib import admin
from .models import *
# Register your models here.

@admin.register(CrudModel)
class CrudAdmin(admin.ModelAdmin):
    list_display = ('id','name', 'email', 'password')
