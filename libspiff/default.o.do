. ./variables
redo-ifchange $2.c
clang $CFLAGS -c -o $3 $2.c
