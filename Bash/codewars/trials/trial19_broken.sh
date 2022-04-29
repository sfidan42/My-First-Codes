<<'MULTILINE-COMMENT'
convertion between factorial base and decimal base
MULTILINE-COMMENT
#!/bin/bash
# takes two parameters 
# 1: function dec2FactString or factString2Dec
# 2: string
oper () {
    if ($1 == dec2FactString); then
        dec2FactString $2
        echo ${arr[@]}
    fi
    if ($1 == factString2dec); then
        factString2dec $2
        echo $num
    fi
}
oper "$1" "$2"

i=1
dec2FactString () {
    n=$1
    let arr[i - 1] = n % i
    let n /= i
    let i += 1
    [ n ] && dec2FactString $1
}

factString2dec () {
    arr=$1
    num=1
    let i=${#arr} - 1
    j=0
    for dig in ${arr[@]}; do
        let num *= arr[i] * fact j
    done
}

fact () {
    j=$1
    (( j < 2 )) && echo $j || echo $((j*fact j))
}
