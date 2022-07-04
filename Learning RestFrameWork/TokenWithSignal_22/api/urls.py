from django.urls import path, include
from api import views
from rest_framework.routers import DefaultRouter  
from django.conf import settings 
from django.db.models.signals import post_save 
from django.dispatch import receiver 
from rest_framework.authtoken.models import Token


# ...... Creating Router Objects ........ 
router = DefaultRouter()

# Registering with router ......
router.register("api", views.StudentModelViewApi, basename = 'readwriteapi')


urlpatterns = [ 
    path('', include(router.urls)), 

    # # This path will give me the builtin login and logout functionality
    path('auth/', include('rest_framework.urls', namespace = 'rest_framework')),
] 


@receiver(post_save, sender = settings.AUTH_USER_MODEL)
def create_auth_token(sender, instance=None, created=False, **kwargs):  
    print(f"The sender is {sender} \n The typeof sender is {type(sender)} \n The instance is {instance} \n The type of instance is {type(instance)} \n The kwargs is {kwargs} \n The type of kwargs is {type(kwargs)}")
    if created: 
        Token.objects.create(user = instance)