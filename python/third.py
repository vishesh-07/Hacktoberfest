#1
with open("tanya.txt") as file_in:
    lines = []
    for line in file_in:
        lines.append(line.strip('\n'))
    print(lines)


#2
def longest_words(file):
    with open(file, 'r') as f:
        words = f.read().split()
    max_len = len(max(words, key=len))
    return [word for word in words if len(word) == max_len]

print(longest_words('tanya.txt'))

#3
import random
def randnum(fname):
	lines=open(fname).read().splitlines()
	print(lines)
	return random.choice(lines)

print(randnum('tanya.txt'))

#4
def remove_newlines(fname):
    flist = open(fname).readlines()
    return [s.rstrip('\n') for s in flist]

print(remove_newlines("test.txt"))

n=int(input("done"))