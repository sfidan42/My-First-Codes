import matplotlib.pyplot as plt
import numpy as np
x=np.random.randn(100,2)
print(x)
y=plt.scatter(x[:,0],x[:,1])
plt.show()