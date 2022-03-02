from itertools import combinations_with_replacement
count=0
print("ingerident combinations with replacement")
for ingerident in combinations_with_replacement("tpl",4):
    print("".join(ingerident))
    count+=1
print("We have {} types of salad.".format(count))
#t:tomato
#p:piper
#l:lettuce
#so if we want to choose 4 units from unlimited supply of ts,ps and ls, we can make the salad as 15 different types.
