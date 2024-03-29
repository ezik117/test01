#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "test.h"

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  char *ns = malloc(size+1);
  memcpy(ns, data, size);
  ns[size] = '\0';
  
  function1(ns);
  
  free(ns);
  return 0;
}