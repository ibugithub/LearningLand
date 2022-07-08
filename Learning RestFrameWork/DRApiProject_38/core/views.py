from django.shortcuts import render, HttpResponseRedirect 
from django.views.generic.base import TemplateView, RedirectView
from .forms import *
from .models import *
from django.views import View
# Create your views here.

# This function will add and show the data


# <<---oo----oo-----This is Class Based View-----oo----->>
class add_show(TemplateView):
    template_name = 'core/add_and_show.html'

    def get_context_data(self, *args, **kwargs):
        context = super().get_context_data(**kwargs)
        fo = CrudForm()
        stinfo = CrudModel.objects.all()
        context = {'var':fo, 'sinfo':stinfo}
        return context
    def post(self,request):
        fo = CrudForm(request.POST)
        if fo.is_valid():
            vname = fo.cleaned_data['name']
            vemail = fo.cleaned_data['email']
            vpassword = fo.cleaned_data['password']
            mo = CrudModel(name=vname, email=vemail, password=vpassword)
            mo.save()
            return HttpResponseRedirect('/')

# <<---oo----oo-----This is Function Based View-----oo----->>
# def add_show(request):
    # if request.method == 'POST':
    #     fo = CrudForm(request.POST)
    #     if fo.is_valid():
    #         vname = fo.cleaned_data['name']
    #         vemail = fo.cleaned_data['email']
    #         vpassword = fo.cleaned_data['password']
    #         mo = CrudModel(name=vname, email=vemail, password=vpassword)
    #         mo.save()
    #         fo = CrudForm()
    # else:
    #     fo = CrudForm()

    # stinfo = CrudModel.objects.all()
    # return render(request, 'core/add_and_show.html', {'var': fo, 'sinfo': stinfo})



# This function will delete the data

# <<---oo----oo-----This is Class Based View-----oo----->>

class delete_data(RedirectView):
    url = '/'

    def get_redirect_url(self, *args, **kwargs):
        del_id = kwargs['id']
        dd = CrudModel.objects.get(pk = del_id)
        dd.delete()
        return super().get_redirect_url(*args, **kwargs)





# <<---oo----oo-----This is Function Based View-----oo----->>

# def delete_data(request, id):
#     if request.method == 'POST':
#         dd = CrudModel.objects.get(pk=id)
#         dd.delete()
#         return HttpResponseRedirect('/')





# This view will work for update the data

# <<---oo----oo-----This is Class Based View-----oo----->>
class update_data(View):
    def get(self, request, id):
        pi = CrudModel.objects.get(pk = id)
        fo = CrudForm(instance=pi)
        return render(request, 'core/update_students.html', {'form':fo})
    def post(self, request, id):
        pi = CrudModel.objects.get(pk = id)
        fo = CrudForm(request.POST, instance = pi)
        if fo.is_valid():
            fo.save()
        return HttpResponseRedirect('/')



# <<---oo----oo-----This is Function Based View-----oo----->>
# def update_data(request, id):
    
#     if request.method == 'POST':
#         pi = CrudModel.objects.get(pk=id)
#         fo = CrudForm(request.POST, instance=pi)
#         if fo.is_valid():

# #   THE BIG PREVIOUS MISTAKE I MADE---->          
#             # vname =fo.cleaned_data['name']
#             # vemail = fo.cleaned_data['email']
#             # vpassword = fo.cleaned_data['password']
#             # mf = CrudModel(name = vname, email = vemail, password = vpassword)
# # THE BIG PREVIOUS MISTAKE I MADE --->            
#             fo.save()

#     else:

#         pi = CrudModel.objects.get(pk=id)
#         fo = CrudForm(instance=pi)
#     return render(request, 'core/update_students.html', {'form' : fo})
