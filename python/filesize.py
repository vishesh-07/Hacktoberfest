import os
file_size=os.stat('doc.txt')
print(file_size.st_size)