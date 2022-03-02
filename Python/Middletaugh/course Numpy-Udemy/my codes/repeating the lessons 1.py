import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

font={'weight': 'normal','color': 'blue','size': '17'}

plt.plot([0,1,2],[0,2,4],label='y=2x')
plt.plot([2,3],[4,6],'--')
plt.title("My Graph",fontdict=font)

plt.xlabel("label x",fontdict=font)
plt.ylabel("label y",fontdict=font)

np.arange(0,4.5,1)

plt.xticks(ticks=np.arange(0,4.5,1))
plt.legend()
plt.show()