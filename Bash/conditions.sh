[[ 4 -gt 3 ]] | echo $?
[[ 3 -gt 4 ]] | echo $?

[[ 4 -gt 3 ]] && echo true || echo false
[[ 3 -gt 4 ]] && echo true || echo false

[[ -e math.sh ]] && echo t || echo f
