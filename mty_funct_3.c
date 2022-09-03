#include "monty.h"

/**
 * breaking - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */
void breaking(stack_t **stack, unsigned int line_number)
{

	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

		if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

	val = (*stack)->next;
	sum = val->n;
	sum /= (*stack)->n;
	pop(stack, line_number);
	val->n = sum;
}

/**
 * increase - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */
void increase(stack_t **stack, unsigned int line_number)
{

	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->next;
	sum = val->n;
	sum *= (*stack)->n;
	pop(stack, line_number);
	val->n = sum;
}

/**
 * enter - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */
void enter(stack_t **stack, unsigned int line_number)
{
	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

	val = (*stack)->next;
	sum = val->n;
	sum %= (*stack)->n;
	pop(stack, line_number);
	val->n = sum;
}
