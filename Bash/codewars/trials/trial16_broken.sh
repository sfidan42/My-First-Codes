<<'MULTILINE-COMMENT'
Two tortoises named A and B must run a race. A starts with an average speed of 720 feet per hour. Young B knows she runs faster than A, and furthermore has not finished her cabbage.

When she starts, at last, she can see that A has a 70 feet lead but B's speed is 850 feet per hour. How long will it take B to catch A?

More generally: given two speeds v1 (A's speed, integer > 0) and v2 (B's speed, integer > 0) and a lead g (integer > 0) how long will it take B to catch A?

The result will be an array [hour, min, sec] which is the time needed in hours, minutes and seconds (round down to the nearest second) or a string in some languages.

If v1 >= v2 then return nil, nothing, null, None or {-1, -1, -1} for C++, C, Go, Nim, Pascal, COBOL, [-1, -1, -1] for Perl,[] for Kotlin or "-1 -1 -1".

Examples:
(form of the result depends on the language)

race(720, 850, 70) => [0, 32, 18] or "0 32 18"
race(80, 91, 37)   => [3, 21, 49] or "3 21 49"
Note:
See other examples in "Your test cases".

In Fortran - as in any other language - the returned string is not permitted to contain any redundant trailing whitespace: you can use dynamically allocated character strings.

** Hints for people who don't know how to convert to hours, minutes, seconds:

Tortoises don't care about fractions of seconds
Think of calculation by hand using only integers (in your code use or simulate integer division)
or Google: "convert decimal time to hours minutes seconds"
MULTILINE-COMMENT

#S=$(echo $((3600*$3/($2-$1))) | bc -l)
#h=$(($S/60/60))
#m=$((($S%3600)/60))
#s=$(($S%60))
#[[ $(($1>=$2)) ]] && echo "$h $m $s" || echo "-1 -1 -1"
#the code below works fine but I got the error:
#Test Failed
#expected: "0 32 18"
#     got: "00 32 18"
#eval "echo $(date -ud "@$(echo $((3600*$3/($2-$1))) | bc -l)" +'%H %M %S')"

#working one:
#!/bin/bash
race() {
    if [ $1 -ge $2 ]; then echo "-1 -1 -1"; exit 1; fi
    let dv=$2-$1
    sec=$(echo $3*3600/$dv | bc)
    h=$(echo $sec/3600 | bc)
    m=$(echo $sec%3600/60 | bc)
    s=$(echo $sec%60 | bc)
    echo "$h $m $s"
}
race $1 $2 $3
