DEPS="$2.o"
redo-ifchange $DEPS
clang -o $3 $LDFLAGS $DEPS
