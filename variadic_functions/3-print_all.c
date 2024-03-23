#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on the provided format
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    int printed = 0;

    va_start(args, format);

    while (format && format[i])
    {
	    while (printed)
		    printf(", ");

	    switch (format[i])
	    {
		    case 'c':
			    printf("%c", va_arg(args, int));
			    printed = 1;
			    break;
		    case 'i':
			    printf("%d", va_arg(args, int));
			    printed = 1;
			    break;
		    case 'f':
			    printf("%f", (float)va_arg(args, double));
			    printed = 1;
			    break;
		    case 's':
			    str = va_arg(args, char *);
			    if (str == NULL)
			    {
				    printf("(nil)");
			    }
			    if (str)
			    {
				    printf("%s", str);
			    }
			    printed = 1;
			    break;
		    default:
			    break;
	    }
	    i++;
    }
    printf("\n");
    va_end(args);
}
