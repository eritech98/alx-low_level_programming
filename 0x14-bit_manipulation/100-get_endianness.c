#include "main.h"


/**
*get_endianness - This function cHECKs if a machine is small /big EndiAN
*Return: Will Return 0 for big andI 1 for liTTLE
*/

	int get_endianness(void)
	{
		unsigned int ERICK_olando = 1;
	char *c = (char *) &ERICK_olando;



	return (*c);
	}
