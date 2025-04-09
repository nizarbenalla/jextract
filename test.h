#include <stdarg.h>

typedef int (*compare_fn)(const void* a, const void* b);

void my_qsort(void* base, int size, compare_fn cmp);
