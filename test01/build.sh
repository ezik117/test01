$CC $CFLAGS test.c -c -o test.o
$CC $CFLAGS fuzzer.c -c -o fuzzer.o
$CC $CFLAGS $LIB_FUZZING_ENGINE fuzzer.o test.o -o $OUT/test01-fuzzer