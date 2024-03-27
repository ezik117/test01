#ifndef TEST_H
#define TEST_H

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size);
int count_letters(char *s);
int another_test(char *s);
int do_not_called(char *s);

#endif