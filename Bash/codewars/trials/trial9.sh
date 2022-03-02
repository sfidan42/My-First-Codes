<< 'MULTILINE-COMMENT'
Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.

Note: a and b are not ordered!

Examples (a, b) --> output (explanation)
(1, 0) --> 1 (1 + 0 = 1)
(1, 2) --> 3 (1 + 2 = 3)
(0, 1) --> 1 (0 + 1 = 1)
(1, 1) --> 1 (1 since both are same)
(-1, 0) --> -1 (-1 + 0 = -1)
(-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)

##code1
sum=0
a=$1
b=$2
for num in $(seq $((a<b?a:b)) $((a>b?a:b))); do 
  let sum+=num; 
done
echo $sum
MULTILINE-COMMENT


## alternate find min max
#[ $a -gt $b ] && { c=$b; b=$a; a=$c; }

##code2
c=$[$1-$2]
echo $(((${c#-}+1)*($1+$2)/2))

##note: ${c#-} represents abs of c
