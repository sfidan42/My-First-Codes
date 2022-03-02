import numpy as np
List=[1,2,3,4]
Array= np.array([1,2,3,4])
for x in List:
    print(x)
for x in Array:
    print(x)
List.append(5)
Array= Array + np.array([5])

print("the list is",List )
print("the Array is",Array )

print(List +[4,5,6])
print(Array + np.array([4,5,6,7]))

#the thing that happens on the arrays named"broadcasating"
L2=[]
for e in List:
    L2.append(e*2)
List=L2
print(List)

print(Array**2)
#print(List**2) that doesnt work so we use for loop as above
