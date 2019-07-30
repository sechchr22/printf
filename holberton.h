#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
void _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_char(va_list lista);
int print_string(va_list lista);
int print_anul(char);
int print_int(va_list lista);
void printd(int n);
int victory(char f, va_list lista, unsigned int *i);
#endif
