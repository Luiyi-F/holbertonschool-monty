#include "monty.h"

/**
 * main - monty program
 * @argc: argument counter
 * @argv: argument value file name
 * Return: success or failure
 */
int main(int argc, char **argv)
{

	if (argc != 2)
	{/** print usage error*/

		usage_error();
	}
	else
	{
		/** read the file and execute */
		exec(argv[1]);
	}

	return (EXIT_SUCCESS);

}

/**
 * _free - free stack
 * @stack: stack
 *
 */
/*With this function we clean the stack*/
void _free(stack_t *stack)
{
stack_t *list = NULL;

	list = stack;

	if (list != NULL)
	{
		_free(list->next);
		free(list);
	}

}

/**
 * _isdigit - Checks if is a digit  0 .. 9
 * Return: 0 or 1
 * @c: Value
 **/
/* it's strfunction*/
int _isdigit(char *c)
{
	char *tmp = c;

	if (c == NULL)
		return (0);
	if (*tmp == '-')
		tmp++;

	for (; *tmp != '\0'; tmp++)
	{
		if ((*tmp < '0' || *tmp > '9'))
		{
			return (0);
		}
	}
	return (1);
}
