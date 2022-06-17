from lib2to3.pgen2.token import STRING
from tkinter.tix import INTEGER

# ..... Class , Object, Constructor, Distructor, .......
# class PartyCounter: 
#     x = 0
#     name = " "
#     def __init__(self, name ):
#         self.name = name
#         print(self.name, "constructed") 

#     def party(self):
#         self.x = self.x + 1 
#         print(self.name ,"Party Count ", self.x)  
    


# an = PartyCounter('ibu')
# an.party()

# nibu = PartyCounter('nibu') 
# nibu.party()
# an.party() 
# nibu.party()


# print(dir(an))
# print("PartyAnimal : " ,PartyAnimal())
# print("PartyAnimal Type : " ,type(PartyAnimal())) 

# print("An : ", an)
# print("An " , type(an)) 

# print(dir(an))
# print(an.x)

# name = "ibrahim"

# print(dir(name))  



















# ......... Inheritance .................

class OurParty:
    x = 0 
    name = " " 

    def __init__(self, name): 
        self.name = name 
        print(self.name, "constructed")

    def party(self):
        self.x += 1 
        print(self.name, " Party Counted ", self.x) 


class FootballFan(OurParty): 
    Points = 0 
    def touchDown(self) : 
        self.Points += 7 
        self.party()
        print("The party count is ", self.x)
        print(self.name, " points ", self.Points) 

nibu = OurParty("nibu")

ibu = FootballFan("ibu") 
ibu.touchDown()
ibu.party()
