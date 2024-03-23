#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything based on the provided format
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, num;
	char *str, c;
	float f;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			c = (char) va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d", num);
			break;
		case 'f':
			f = (float) va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
