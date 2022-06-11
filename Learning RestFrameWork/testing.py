import json

pPrize = {'mango':200, 'apple': 130}

jPrize = json.dumps(pPrize)

print("The pPrize is ", pPrize)
print("The type of PPrize is ", type(pPrize)) 

print("The jPrize is ", jPrize) 
print("The type of jPrize is ", type(jPrize))

unjsonedPrize = json.loads(jPrize)
print("The unjsonedPrize is ", unjsonedPrize)
print("The Type of unjsonedPrize is ", type(unjsonedPrize))