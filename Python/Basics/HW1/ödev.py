
## QUESTION: 2-a
faculty_codes={
'01':'civil engineering',
'02':'Architecture',
'03':'Mechanical Engineering',
'04':'Electrical and Electronics Engineering',
'05':'Mines',
'06':'Chemical and Metallurgical Engineering',
'07':'Management',
'08':'Naval Architecture and Ocean Engineering',
'09':'Science and Letters',
'10':'Aeronautics and Astrounatics',
'11':'Turkish music state conservatory',
'12':'Maritime',
'13':'Textile technologies and design',
'14':'Computer and Informatics Engineering'}

print(faculty_codes)
print(type(faculty_codes))


 ## QUESTION: 2-b
ID=input('please enter student ID')
ID=ID.split()
faculty_code=ID[0][0]+ID[0][1]
faculty_code=str(faculty_code)
print(faculty_code)
acceptance_year=ID[0][3]+ID[0][4]
if int(acceptance_year)<=20:
    acceptance_year='20'+acceptance_year
else:
    acceptance_year='19'+acceptance_year
print(acceptance_year)
l=len(ID)
locthree=l-4
ranking=ID[0][locthree]+ID[0][locthree+1]+ID[0][locthree+2]
print(ranking)

## QUESTION: 2-c
print('you were admitted to the ',faculty_codes[str(faculty_code)],' in the year of ',acceptance_year,' with the ranking of ',ranking)

# QUESTION: 3
order=input("""Ascending or Descending? input ASC or it will always sorted in descending order""")
s=['Name', 'Number', 'Midterm', 'Final' ,'Grade']
my_class = [
 ["Ahmet", "0100130075", "50", "70","62"],
 ["Merve", "0100140176", "60", "75", "69"],
 ["Asli" , "0100130082", "80", "70", "74"],
 ["Burak", "0100150101", "40", "80", "64"]
 ]
#print(my_class[0])
criteria=input("Please enter criteria ")
arr=''
if ('Name'==criteria):
    for a in [0,1,2,3]:
        arr=arr+' '+my_class[a][0]
elif criteria=='Number':
    for a in [0,1,2,3]:
        arr=arr+' '+str(my_class[a][1])
elif criteria=='Midterm':
    for a in [0,1,2,3]:
        arr=arr+' '+str(my_class[a][2])
elif criteria=='Final':
    for a in [0,1,2,3]:
        arr=arr+' '+str(my_class[a][3])
elif criteria=='Grade':
    for a in [0,1,2,3]:
        arr=arr+' '+str(my_class[a][4])
else:
    print('''please rerun the code because your input
criteria doesn't match with existing ones!''')
for i in [0,1,2,3,4]:
    if s[i]==criteria:
        loc=i
arr=arr.split()#it is a list from here
for i in range(0, 4):
    for j in range(i+1, len(arr)):
        if(my_class[i][loc] > my_class[j][loc]):
            temp = my_class[i];
            my_class[i] = my_class[j];
            my_class[j] = temp;
if order=='ASC':
    print(my_class)
else:
    print(my_class.reverse())

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
# QUESTION: 6
laptops={
'Brand':['Lenovo','HP','Apple','Dell','Acer','Asus'],
'CPU':['Intel Core i7','Intel Core i7','Apple M1','Intel Core i7','Intel Core i5','AMD Ryzen'],
'RAM':['16 GB','8 GB','16 GB','16 GB','8 GB','16 GB'],
'Storage':['512 GB','512 GB','1 TB','512 GB','128 GB','1TB']
}
inp=input('laptop Brand Please.')
count=-1
for name in laptops['Brand']:
    if inp==name:
        count=count+1
        break
    else:
        count=count+1
print(count)
print(inp,' laptop has the following properties:',
' CPU:',laptops['CPU'][count],
' RAM:',laptops['RAM'][count],
' Storage:',laptops['Storage'][count])
# QUESTION: 7
