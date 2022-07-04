from rest_framework.authentication import BaseAuthentication 
from django.contrib.auth.models import User 
from rest_framework.exceptions  import AuthenticationFailed


class CustomAuthentication(BaseAuthentication):
    def authenticate(self, request):
        user = request.GET.get('username')
        if user is None:
            return None 
        try :
            user = User.objects.get(username = user) 
        except User.DoesNotExist:
            raise AuthenticationFailed('No such user') 
        return (user, None)
        
