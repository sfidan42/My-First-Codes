<<'MULTILINE-COMMENT'
convert dec to bin and print out number of 1s
MULTILINE-COMMENT

n=$1
x=0;
while (( n ))
do
	(( n%2 )) && let x+=1
	let n/=2
one
echo $x

<<'alternative 1'
n=$1
dobin()
{
	c=0
	while [ n ]; do
    	((c+=n&1, n>>=1));
	done
	echo $c
}
dobin
alternative 1

<<'alternative 2'
n=$1
#code me
D2B=({0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1})

var=${D2B[$n]}
res="${var//[^1]}"
echo "${#res}"
alternative 2
