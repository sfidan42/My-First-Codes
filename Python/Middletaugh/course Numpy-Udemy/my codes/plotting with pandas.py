import pandas as pd 
import matplotlib.pyplot as plt
df=pd.read_csv("a.csv")
plt.hist(df);
plt.show()