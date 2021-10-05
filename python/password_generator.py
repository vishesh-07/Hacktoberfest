import random
import string

length = int(input("Enter the length = "))

upp_case = string.ascii_uppercase
low_case = string.ascii_lowercase
num = string.digits
symbol = string.punctuation

combine = upp_case + low_case + num + symbol

password = "".join(random.sample(combine, length))

print("Password is = ", password)