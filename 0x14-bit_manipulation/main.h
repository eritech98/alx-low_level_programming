#ifndef MAIN_HEADER_
#define MAIN_HEADER_




#include <stddef.h>
#include <unistd.h>
#include <stdio.h>



void print_binary(unsigned long int n);


int clear_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
int get_endianness(void);

unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);



#endif
