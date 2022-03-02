## check if a file is exist
[ -f $1 ] && echo "Nothing to find" || [ -e $1 ] && echo "Found $1" || echo "Can't find $1"
