# _printf


_printf is a function that should take any n number of parameters and print it in simple output program. Depending of their data type or special cases that will be explained in detail below. 

# How to compile this repository
The files  and program are written in C so we will use the gcc compiler. keep in mind that this repository is currently being compiled in gcc 4.8.4 using the current flags  -Wall -Werror -Wextra and -pedantic.

You need to have the header of this repository in the directory you are going to compile everything so it works. In this case you need to have "holberton.h" when you do this compile like this:
```$ gcc -Wall -Werror -Wextra -pedantic *.c```

# _printf features
- this _printf can handle the following special flags, keep in mind that this is a work in progress so there are still missing flags:
- ("%")
- ("%c")
- ("%s")
- ("%i")
- ("%d")
- ("%%")
- ("%(unknown)")
- (work in progress)
# Conversion Specifiers
In this section we will explain  what every current flag does and what it takes:
- %c: print a single character Ex: _printf("hello %c", 'H'); 
- %s: print a string of characters Ex: _printf("Hello %s", "World!"); 
- %d: print a decimal (base 10) number Ex: _printf("show me this %d", 1000); 
- %i: print an integer in base 10 Ex: _printf("show me this %i", 2500); 
- %%: print a percent sign Ex: _printf("%%"); 


# Header File
```C
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
```
How to activate the man:
```$ man ./man_3_printf```


### Installation

Install the dependencies and devDependencies and start the server.

```sh
Git clone <this repository>
gcc -Wall -Werror -Wextra -pedantic *.c
./a.out
```
Enjoy
## Plugins
 in development:
# Authors
Sergio Rueda, Natalia Medina, Taborda, Carol Hudgson.

