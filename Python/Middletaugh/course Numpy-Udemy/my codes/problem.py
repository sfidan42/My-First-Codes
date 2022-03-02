import numpy as np
A= np.array([(1,1),(1.5,4)])
b=np.array([2200,5050])
X1=np.linalg.solve(A,b)
print(X1)

X2=np.linalg.inv(A).dot(b)
print(X2)