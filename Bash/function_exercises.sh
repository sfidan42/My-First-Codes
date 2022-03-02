#multiplication of number of sequence
function plier { 
    ans=1
    for num in $@
    do
    let ans=ans\*$num
    done
    echo $ans    
}

#check if even
function isiteven {
    [[ $(($1%2)) -eq 0 ]] && echo 1 || echo 0
}

#number of evens
function nevens { 
    count=0
    for num in $@
    do
        if [ $(isiteven $num) -eq 1 ];then
            let count=count+1
        fi
    done
    echo $count    
}

# odd number percentage
function howodd {
    echo 1 - $(nevens $@) / 5 | bc -l
}

#fibonacci
function fib {
    a=0
    b=1
    for i in $(seq 1 $1); do
        fibs[$i]=$a
        fn=$((a + b))
        a=$b
        b=$fn
    done
    echo ${fibs[*]}
}
