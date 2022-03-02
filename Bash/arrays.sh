plagues=(blood frogs lice flies sickness boils hail locusts darkness death)
echo ${plagues[0]}
echo ${plagues[3]}
echo ${plagues[*]}
echo ${plagues[*]}
plagues[4]=disease ##changing array element
echo ${plagues[*]} 
echo ${plagues[*]:5:3} ##range in an array
echo ${#plagues[*]}  ##length of the array
dwarfs=(grumpy sleepy sneezy doc)
echo ${dwarfs[*]}
dwarfs+=(bashful dopey happy)
echo ${dwarfs[*]}
