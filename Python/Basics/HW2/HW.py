import re
name=open('adata.txt')
fh=name.readlines()
count=0
lst=[]

for line in fh:
    stuff=re.findall('[0-9]+',line)
    if stuff ==[] : continue

    count+=1
    lst=lst+stuff
sum=0
for numbers in lst:
    sum+=int(numbers)
print(sum)

#count is the count of numbers in the text.
