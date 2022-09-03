#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

extern int info;
typedef struct cmd_s
{
	FILE *fd;
	char *line;
} cmd_t;

extern cmd_t cmd;
extern int value;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/** monty function*/

void exec(char *argv);
int getopc(stack_t **stack, char *arg, char *val, unsigned int line_number);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void linking(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void breaking(stack_t **stack, unsigned int line_number);
void increase(stack_t **stack, unsigned int line_number);
void enter(stack_t **stack, unsigned int line_number);

/**help **/
int check_push(char *token);
int get_value(char *token);
char get_token(char *op, char *token);

/** stack func **/
void _free(stack_t *stack);
void clean_stack(stack_t **stack);

/** error function */
void usage_error(void);
void open_error(char *file);
void push_error(FILE *fd, char *line, stack_t *stack, int line_number);
void hand_error(FILE *fd, char *line, stack_t *stack, char *val, int line_number);

/** standard function*/

int _isdigit(char *c);
stack_t *new_Node(int n);

#endif