# Build project using the OSS-Fuzz enviroonment flags.
$CC $CFLAGS -c test.c -o test.o

# Build the fuzzers. We must ensure we link with $CXX to support Centipede.
# Fuzzers must be placed in $OUT/
$CC $CFLAGS -c fuzzer.c -o fuzzer.o
$CXX $CXXFLAGS $LIB_FUZZING_ENGINE fuzzer.o test.o -o $OUT/test01


