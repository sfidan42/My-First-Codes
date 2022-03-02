# QUESTION: 6
laptops={
'Brand':['Lenovo','HP','Apple','Dell','Acer','Asus'],
'CPU':['Intel Core i7','Intel Core i7','Apple M1','Intel Core i7','Intel Core i5','AMD Ryzen'],
'RAM':['16 GB','8 GB','16 GB','16 GB','8 GB','16 GB'],
'Storage':['512 GB','512 GB','1 TB','512 GB','128 GB','1TB']
}
inp=input('laptop Brand Please.')
count=-1
for name in laptops['Brand']:
    if inp==name:
        count=count+1
        break
    else:
        count=count+1
print(count)
print(inp,' laptop has the following properties:',
' CPU:',laptops['CPU'][count],
' RAM:',laptops['RAM'][count],
' Storage:',laptops['Storage'][count])