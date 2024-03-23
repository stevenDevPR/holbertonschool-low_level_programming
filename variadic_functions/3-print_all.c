#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on the provided format
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int first_arg = 1;
	char type;
	char *str;
	const char *tmp_format = format;
	va_list args;
	va_start(args, format);

    while (*tmp_format)
    {
	    type = *tmp_format;
	    tmp_format++;

	    switch (type)
	    {
		    case 'c':
			    printf("%c, ", va_arg(args, int));
			    break;
		    case 'i':
			    printf("%d, ", va_arg(args, int));
			    break;
		    case 'f':
			    printf("%f, ", (float)va_arg(args, double));
			    break;
		    case 's':
			    str = va_arg(args, char *);
			    printf("%s, ", str ? str : "(nil)");
			    break;
	    }
	    if (!first_arg && *tmp_format)
	    {
		    printf(", ");
		    first_arg = 0;
	    }
    }
    va_end(args);
    printf("\n");
}
