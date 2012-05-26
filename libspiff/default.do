. ./variables
DEPS="$2.o"
redo-ifchange $DEPS
echo clang -o $3 $LDFLAGS $DEPS >&2
clang -o $3 $LDFLAGS $DEPS
