#ifndef OP_FUNCTIONS_H
#define OP_FUNCTIONS_H

int op_sum(int a, int b);
int op_sub(int a, int b);
int op_mult(int a, int b);
int op_divide(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
