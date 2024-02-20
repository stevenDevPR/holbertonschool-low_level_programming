#include "main.h"

int absolute(void)
{
	_abs(5);

	return (0);
}


int _abs(int num)
{

	if (num < 0)
	{
		return -num;
	}
	else {
		return num;
	}
}
