#ifndef main_h
#define main_h
#include <stdef.h>  

typedef struct list_t
{
char str;
unsigned in len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
