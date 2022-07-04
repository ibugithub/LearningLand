from rest_framework import serializers 
from .models import Student 

# # ..... This is validator ....
def start_with_N(value):
    if value[0].lower() == "n":
        raise serializers.ValidationError("Name can't be start with N like Nusrat")


class Student_Serializer(serializers.Serializer):
    name = serializers.CharField(max_length = 100, validators = [start_with_N]) 
    roll = serializers.IntegerField() 
    city = serializers.CharField(max_length = 100) 
    
    def create(self, validate_data):
        return Student.objects.create(**validate_data) 
    
    def update(self, instance, validate_data):
        print(f"The instance is {instance}")
        print(f"The validate is {validate_data}") 
        instance.name = validate_data.get('name', instance.name)
        instance.roll = validate_data.get('roll', instance.roll) 
        instance.city = validate_data.get('city', instance.city) 
        instance.save()
        return instance 

    # # ...... This is Field level Validation ......
    def validate_roll(self, value):
        if value > 200:
            raise serializers.ValidationError("Our campass has only 200 seat for this subject")
        return value 

    # # ..... This is Object level Validation ......
    def validate(self, data): 
        name = data.get('name') 
        city = data.get('city')
        if name.lower() == "nusrat" and city.lower() != "hateland": 
            raise serializers.ValidationError("nusrat must hate me") 
        return data
