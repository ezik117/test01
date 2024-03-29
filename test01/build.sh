$CC $CFLAGS -c test.c -o test.o
$CC $CFLAGS -c fuzzer.c -o fuzzer.o
#$CC $CFLAGS $LIB_FUZZING_ENGINE fuzzer.o test.o -o $OUT/test01
$CXX $CXXFLAGS $LIB_FUZZING_ENGINE fuzzer.o test.o -o $OUT/test01