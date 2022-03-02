import pandas as pd
df=pd.read_csv('a.csv')
df2=pd.read_csv("https://media.geeksforgeeks.org/wp-content/uploads/nba.csv")
#print(type(df))
df1=df.head()
df3=df2.head()
print(
df1,
df3
)