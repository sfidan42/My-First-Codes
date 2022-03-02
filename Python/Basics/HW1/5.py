# QUESTION: 5
L=[]
while True:
    a=input('Enter integers respectively to make a list:')
    if a=='':
        break
    L.append(str(a))
print(L)
for i in range(0,len(L)-2):
    if L[i]<L[i+1]:
        cond=1
    else:
        cond=0
        dueto=L[i+1]
        break
if cond==1:
    print('The series is monotone increasing.')
else:
    print('The series is not monotone increasing due to',dueto)