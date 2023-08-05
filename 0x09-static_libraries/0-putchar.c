#include <unistd.h> 
 
/** 
 * _putchar - This is our function _putchar
 * @c: Our parameter with value of a character
 * 
 * Return: Return 1 which is of value of an integer 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
}
