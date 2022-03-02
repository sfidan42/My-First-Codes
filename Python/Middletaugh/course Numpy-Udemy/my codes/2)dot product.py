import numpy as np
A1=np.array([1,2,3])
A2=np.array([10,11,12])
dot=0
for e in range(len(A1)):
    dot+=A1[e]*A2[e]
print(dot)
dot=0
for i,f in zip(A1,A2):
    dot+=i*f
print(dot)

print(np.sum(A1*A2))
print(np.dot(A1,A2))
print(A1.dot(A2))
print(A1@A2)