<<'MULTILINE-COMMENT'
Task
Given three integers a ,b ,c, return the largest number obtained after inserting the following operators and brackets: +, *, ()
In other words , try every combination of a,b,c with [*+()] , and return the Maximum Obtained
Consider an Example :
With the numbers are 1, 2 and 3 , here are some ways of placing signs and brackets:

1 * (2 + 3) = 5
1 * 2 * 3 = 6
1 + 2 * 3 = 7
(1 + 2) * 3 = 9
So the maximum value that you can obtain is 9.
MULTILINE-COMMENT

for arg in "$@"
  do
  if [ "$arg" -gt "$max" ]
  then 
  max=$arg 
  else 
  sum+=$arg
  fi 
done
echo $[$sum*$max]
