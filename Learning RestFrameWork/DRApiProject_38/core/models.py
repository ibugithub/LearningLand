from django.db import models

# Create your models here.
class CrudModel(models.Model):
    name = models.CharField(max_length = 50)
    email = models.EmailField(max_length = 60)
    password = models.CharField(max_length = 20)




    
