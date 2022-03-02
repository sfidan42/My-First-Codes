#HW2
#day3

#mid,final,hw
grades=[ 
(60,70,65),
(90,100,87),
(76,54,82),
(65,66,76),
(32,33,49)]

l=len(grades)
r=range(l)
# I don't want to call len and range functions more than once.
# So the code will run little faster.

Averages=[0,0,0,0,0] #preallocating runs the code faster
for i in r:
    Averages[i]=sum(grades[i])//3
# Now,we are done finding the averages of the grades.
#print(Averages) #Checked if the code worked right.

#name,surname
names =[ 
("Ayşe","Öz"), 
("Ahmet","Karakaya"), 
("Selim","Bayraktar"), 
("Yunus","Bahar"), 
("İsmail","Kış") ]

info=dict(zip(names,Averages))
# Now ,we are done with dict "info."
#print(info) #Checked if the code worked right.

info=dict(   reversed(  sorted(info.items(), key=lambda item: item[1])  )   ) 
#This new dict includes same key:value pairs but it is ordered as descending according to values.
#print(info) # check.
identity=list(info.keys())
print(f"""Congrats, {identity[0][0]+" "+identity[0][1]} ! You have the highest score with {info[identity[0]]}""")
