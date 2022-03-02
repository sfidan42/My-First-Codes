import numpy as np
from matplotlib import pyplot as plt
x=np.arange(1,10,1)
y1=2*x+1
y2=2*x*x+2
graph1=plt.plot(x,y1,color='g',linewidth=3)
graph2=plt.plot(x,y2,color='red',linewidth=3)
plt.show()