#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on the provided format
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;

    va_start(args, format);

    char* str;

    char type = *format++;

    while (*format)
    {
	    switch (type)
	    {
		    case 'c':
			    printf("%c", va_arg(args, int));
			    break;
		    case 'i':
			    printf("%d", va_arg(args, int));
			    break;
		    case 'f':
			    printf("%f", (float)va_arg(args, double));
			    break;
		    case 's':
			    str = va_arg(args, char *);
			    printf("%s", str ? str : "(nil)");
			    break;
		    default:
			    break;
	    }
    }
    va_end(args);
    printf("\n");
}
