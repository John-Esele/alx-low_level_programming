#include <unistd.h>
  2 /**
  3  * _putchar Write the character c to stdout
  4  * @n: The character to print
  5  *
  6  * Return: On success 1.
  7  * On error, -1 is returned, and errno is set appproppriately.
  8  */
  9 int _putchar(char c)
 10 {
 11         return (write(1, &c, 1));
 12 }


