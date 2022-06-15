import pickle

fruit_prize = {'mango': 2400 , "orange" : 1400} 

pfruit_prize = pickle.dumps(fruit_prize) 
print("The Fruite prize is ", fruit_prize) 
print("The pickled fruite prize is", pfruit_prize)