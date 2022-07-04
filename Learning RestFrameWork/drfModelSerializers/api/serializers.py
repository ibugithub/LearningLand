from rest_framework import serializers 
from .models import Student 

# # ...... This is validator .....
def start_with_n(value):
    if value[0].lower() == "n":
        raise serializers.ValidationError("Name can't be start with n like the nusrat")

class Student_Serializer(serializers.ModelSerializer):
    # name = serializers.CharField(read_only = True)
    # # ...For using the validators in name ....
    name = serializers.CharField(validators = [start_with_n])
    class Meta: 
        model = Student
        fields = ["name", "roll", "city"] 
        # read_only_fields = ["name", "city"]
        # extra_kwargs = {"name" : {"read_only" : True}} 


 # # ...... This is Field level Validation ......
    def validate_roll(self, value):
        if value >200:
            raise serializers.ValidationError("We have just 200 sit for this subject") 
        return value 
    

# # ..... This is Object level Validation ......
    def validate(self, data):
        print(f"The data is {data}") 
        name = data.get('name') 
        city = data.get("city") 
        if name.lower() == "nusrat" and city.lower != "hateland":
            raise serializers.ValidationError("Nusrat must Hate me") 
        
        return data 
     

