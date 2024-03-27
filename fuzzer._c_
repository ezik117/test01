#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "test.h"


int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  char *buf = malloc(size+1);
  memset(buf, 0, size + 1);
  memcpy(buf, data, size);
    
  count_letters(buf);
  another_test(buf);
  
  free(buf);
  
  return 0;
}

