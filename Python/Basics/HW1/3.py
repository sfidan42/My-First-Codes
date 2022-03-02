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
