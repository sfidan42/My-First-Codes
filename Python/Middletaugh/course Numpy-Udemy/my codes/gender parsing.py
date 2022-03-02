import pandas as pd
import numpy as np

csv_url='http://bit.ly/kaggletrain'
df=pd.read_csv(csv_url)

sex_num='0'
sex_num=df.Sex.map({'female':0,'male':1})
df['sex_num']=sex_num

#print(df.head(5))
#print(list(df.columns))


print(df.loc[:,['Sex','sex_num']])
