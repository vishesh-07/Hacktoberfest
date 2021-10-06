tfile=open('doc.txt')
text=tfile.read().split()
longword=max(text)
print("longest word is: ",longword)