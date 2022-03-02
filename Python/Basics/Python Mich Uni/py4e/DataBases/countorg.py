fname='mbox-short.txt'
fh = open(fname)
count=0
lst=list()
for line in fh:
    if not line.startswith('From: '): continue
    #print(line)
    count+=1
    lst=lst+line.split()
i=1
count2=0
while i <=count:
    print(lst[i])
    count2+=1
    i+=2
print(count)
print(count2)
