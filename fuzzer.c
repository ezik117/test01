/* Copyright 2022 Ada Logics ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "test.h"

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  char *ns = malloc(size+1);
  memcpy(ns, data, size);
  ns[size] = '\0';
  
  count_lowercase_letters(ns);

  myfunc(ns);

  int a = *data;
  int b = (int)(size / 2);
  get_the_right_character(ns, a);
  read_key_figures(ns, b);
  
  free(ns);
  return 0;
}
