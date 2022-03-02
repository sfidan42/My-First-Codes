echo "simple for loop"
echo "Before Loop"
for i in {1..3}
do
    echo "i is equal to $i"
done
echo "After Loop"
echo ""
echo "for loop for a list"
stooges=(curly larry moe)
for stooge in ${stooges[*]}
do
    echo "Current stooge: $stooge"
done
echo ""
echo "while loop example"
count=3
while [[ $count -gt 0 ]]
do
  echo "count is equal to $count"
  let count=$count-1
done
echo ""
echo "numbers from 1 to 10 that are less then  3 or greater then 8"
for number in {1..10}
do
  if [[ $number -lt 3 ]] || [[ $number -gt 8 ]]
  then
    echo $number
  fi
done
