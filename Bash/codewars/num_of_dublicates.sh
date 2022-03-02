<< 'MULTILINE-COMMENT'
Count the number of Duplicates
Write a function that will return the count of distinct case-insensitive alphabetic 
characters and numeric digits that occur more than once in the input string. 
The input string can be assumed to contain only alphabets (both uppercase and 
lowercase) and numeric digits.

Example
"abcde" -> 0 # no characters repeats more than once
"aabbcde" -> 2 # 'a' and 'b'
"aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
"indivisibility" -> 1 # 'i' occurs six times
"Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
"aA11" -> 2 # 'a' and '1'
"ABBA" -> 2 # 'A' and 'B' each occur twice
MULTILINE-COMMENT

read word
i=0
while true ;do
  if [ -z "$word" ];then
    break
  fi
  let letters[$i]=${word[0]}
  repeat=1
  for n in {${i+1}..${#word}};do
    if [${word[$n]} -eq ${word[$i]}];then
      let repeat=$repeat+1
    fi
  done
  let values[$i]=$repeat
  unset word[$i]
  x=0
  for num in ${values[@]}
    do
        if [[ $num =~ 1 ]]
        then
            let x=x+1
        fi
  let i=i+1
  done
  done
