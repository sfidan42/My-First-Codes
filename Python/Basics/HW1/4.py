# QUESTION: 4

i=0
A=[]
l=''
while True:
    a=input('Enter integers respectively to make a list:')
    if a=='':
        break
    l=l+' '+str(a)
A=l.split()
print(A)
lng=int(len(A)/2)
B=''
if len(A) % 2 != 0:
    for i in range(lng+1,len(A)):
        B=B+' '+str(A[i])
    for i in range(0,lng+1):
        B=B+' '+str(A[i])
else:
    for i in range(lng,len(A)):
        B=B+' '+str(A[i])
    for i in range(0,lng):
        B=B+' '+str(A[i])
print(B.split())
