#include <unitstd.h> 

/**
 * _putchar - do sth 
 * @c : the lkdl
 *
 * Retrrn: on success 1.
 * on error , -1 
 */
int _purchar(char c)
{
	return (write(1, &c, 1));
}
