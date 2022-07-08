from django import forms
from .models import *


class CrudForm(forms.ModelForm):
    class Meta:
        model = CrudModel
        fields = '__all__'
    
        widgets = {
            'name' : forms.TextInput(attrs = {'class': 'form-control'}),
            'email' : forms.EmailInput(attrs={
                'class':'form-control'
            }),
            'password': forms.PasswordInput(render_value = True , attrs={'class': 'form-control'})
        }