
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

/* Obtain a backtrace and print it to stdout. */
void print_trace(const char *s) {
  void *array[20];
  char **strings;
  int n, i;

  n = backtrace(array, 20);
  strings = backtrace_symbols(array, n);

  printf("/*\n");
  printf("\"%s\" obtained %d stack frames.\n", s, n);

  for (i = 0; i < n; i++)
    printf("%s\n", strings[i]);

  printf("*/\n");
  free(strings);
}
