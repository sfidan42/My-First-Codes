import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
###barchart
labels=['A','B','C']
values=[1,4,2]
#plt.figure(figsize=(5,10))


a=plt.bar(labels,values)

patterns=['/','*','+']
for bar in a:
    bar.set_hatch(patterns.pop())
#a[0].set_hatch('/')
#a[1].set_hatch('*')
#a[2].set_hatch('+')

plt.show();