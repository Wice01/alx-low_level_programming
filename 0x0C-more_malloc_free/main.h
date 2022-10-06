#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _atoi_digit(char x);
int _isNumber(char *argv);
void print_array(char *a, int nb);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
