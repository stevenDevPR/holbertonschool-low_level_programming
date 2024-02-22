#include "main.h"

int tables(void)
{
	times_table();

	return (0);

}

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
    char i, j;
    char result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            if (j > 0)
            {
                _putchar(44);
		_putchar(32);
	    }
            

	    if (result < 10)
	    {
            	_putchar(32);
	    }
	    else
	    {
	   
                _putchar(result / 10 + '0');

           	_putchar(result % 10 + '0');
	    }
	   
        }
        _putchar('\n');
    }
}

