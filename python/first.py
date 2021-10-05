#Q1) 

afile=open('name.txt')
n=int(input("enter number of lines "))
for i in range(n):
    line=afile.readline()
    print(line)


with open('name.txt','a') as file_append:
	file_append.write('Tanya Saxena')

#3)
n=int(input("Enter no of lines to print from last "))
f = open("name.txt", "r")
for line in (f.readlines() [-n:]):
    print(line,end=" ")
f.close()

#4)
import os
file_size=os.stat('name.txt')
print(file_size.st_size)


#5)
t_list=["tanya","saxena","guna"]
tfile=open("test.txt")
for element in t_list:
    tfile.write(element + "\n")
tfile.close()