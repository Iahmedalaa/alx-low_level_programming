#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdrag.h>
#include <stdio.h>

/** 
 * struct - token - struct token 
 *
 * @token : kld
 * @f : lld 
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
