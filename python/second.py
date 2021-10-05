tfile=open('tanya.txt')
text=tfile.read()

count1=text.count("this")
count2=text.count("these")
count=0

words=text.split()
for word in words:
    if word[-1]=='e':
        count+=1

print('No of times "this" appeared is :',count1)
print('No of times "these" appeared is :',count2)
print('No of words ending with letter "e" is :',count)
n=int(input("done"))