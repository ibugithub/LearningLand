import os
import shutil 

baseDir = os.getcwd()
fileName = 'unMatchedWords.txt'
with os.scandir(baseDir) as dirs:
    for dir in dirs:
        if os.path.isdir(dir.name):
            parentdir = baseDir + "/" + dir.name 
        file = parentdir + "/" + fileName 
        if not os.path.exists(file) :
            filePath = os.path.join(parentdir, fileName) 
            with open(filePath, 'w') as nothing:
                pass
