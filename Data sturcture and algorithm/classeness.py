from msilib.schema import Class


# class Classy(object):
#     def __init__(self):
#         self.items = []  
    
#     def addItem(self,item):
#         self.items.append(item)

#     def getClassiness(self):
#         classiness = 0
#         for i in self.items:
#             if i == "tophat":
#                 classiness+= 2
#             if i == "bowtie":
#                 classiness +=4
#             if i == "monocle":
#                 classiness += 5 
#         return classiness

# me = Classy() 
# print(me.getClassiness()) 

# me.addItem("tophat") 
# print(me.getClassiness())


# me.addItem("bowtie")
# me.addItem("jacket")
# me.addItem("monocle")
# # Should be 11
# print (me.getClassiness())

# me.addItem('bowtie') 
# print(me.getClassiness())




def show_excitement():

    text = "I am super excited for this course! "
    
    return text*6

print(show_excitement())