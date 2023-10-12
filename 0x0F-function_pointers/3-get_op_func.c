#include "3-calc.h"

/**
 * get_op_func - do sth dl.
 * @s: kd
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t kos[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	{NULL, NULL}
};
	int i = 0;

	while (i < 5)
{
	if (s && s[0] == kos[i].op[0] && !s[1])
		return (kos[i].f);
	i++;
}
