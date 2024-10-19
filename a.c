#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int	ft_printf(const char *format, ...)
{
	
}

int	sum(int	count, ...)
{
	va_list	args;
	int	index;
	int	number;
	int	result;

	index = 0;
	result =  0;
	va_start(args, count);
	while (index < count)
	{
		number = va_arg(args, int);
		result += number;
		index++;
	}
	va_end(args);
	return (result);
}

int	sum2(int a, ...)
{
	va_list	args;
	int	index;
	int	number;
	int	result;

	index = 0;
	result =  a;
	va_start(args, a);
	number = va_arg(args, int);
	while (number != 0)
	{
		result += number;
		number = va_arg(args, int);
	}
	va_end(args);
	return (result);
}

int	main(int argc, char *argv[])
{	
	printf("Sum is: %d\n", sum2(4,2,3,4,0));
	return (0);
}
