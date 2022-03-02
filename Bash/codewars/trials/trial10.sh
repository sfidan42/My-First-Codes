<< 'MULTILINE-COMMENT'
Take 2 strings s1 and s2 including only letters from ato z. Return a new sorted string, the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

Examples:
a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) -> "abcdefklmopqwxy"

a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"
MULTILINE-COMMENT

l="$1 $2"
for i in l;do
  (( i > max )) && h=$i
  (( i < min )) && l=$i
done
combine=""
for char in $(seq $l $h); do 
   combine+=${char}
done
echo $combine
