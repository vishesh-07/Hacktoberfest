import random
tfile=open('doc.txt')
text=tfile.read().splitlines()
randomtext=random.choice(text)
print(randomtext)