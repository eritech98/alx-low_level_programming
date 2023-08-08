#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks the  string if  there are digit
 * @str: string which is an array
 *
 * Return: must be 0
 */
int check_num(char *str)
{
	/*we are  declaring variables*/
	unsigned int count1;

	count1 = 0;
	while (count1 < strlen(str)) /*This line counts the string*/

	{
		if (!isdigit(str[count1])) /*check if str there are digit*/
		{
			return (0);
		}

		count1++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Argument count
 * @argv: Arguments vector
 *
 * Return: Must be 0
 */

int main(int argc, char *argv[])

{

	/*We Declare variables*/
	int count2;
	int str_to_int;
	int sum = 0;

	count2 = 1;
	while (count2 < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count2]))

		{
			str_to_int = atoi(argv[count2]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if oNe of the Number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count2++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
