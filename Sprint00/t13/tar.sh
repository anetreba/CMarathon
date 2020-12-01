if [ "$1" = "-c" ]
then
    tar --exclude=$2 $1f $2 $@
elif [ "$1" = "-e" ]
then
    tar --exclude=$2 -xf $2
fi
