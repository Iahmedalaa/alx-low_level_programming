#include "3-clac.h"

/**
 * main - do sth dl.
 * @argc: dkd
 * @argv: kd
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), x, y;

	if (argc != 4)
		printf("Error\n"), exit(98);

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
		printf("Error\n"), exit(99);

	if (!y && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));
	return (0);
}
