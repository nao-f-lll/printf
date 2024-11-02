#include "printf_ft.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	ind;
	int	cnt;
	
	ind = 0;
	cnt = 0;
	if (format != NULL)
	{
		va_start(args, format);
		while (*(format + ind) != '\0')
		{
			if ((*(format + ind) == '%' && *(format + ind + 1) != '\0'))
			{
				if (*(format + ind + 1) == '%')	
					cnt += ft_putchar_fd('%', 1);
				if (*(format + ind + 1) == 'c')	
					cnt += ft_putchar_fd((char) va_arg(args, int), 1);
				if (*(format + ind + 1) == 'd' || *(format + ind + 1) == 'i')
					cnt += ft_putnbr_fd(va_arg(args, int), 1);
				if (*(format + ind + 1) == 'u')
					cnt += ft_putunsnbr_fd(va_arg(args, unsigned int), 1);
				if (*(format + ind + 1) == 'X')
					cnt += ft_putuphex_fd(va_arg(args, unsigned int), 1);
				if (*(format + ind + 1) == 's')	
					cnt += ft_putstr_fd(va_arg(args, char *), 1);
				ind += 2;
			}
			else
				ft_putchar_fd(*(format + ind++), 1);
		}
		va_end(args);
	}
	return (ind);
}

int main(void)
{
	//ft_printf("%c ", 'N');
	printf("%x", -200);
	//printf("hello my name is %s and i'm %d years old", "Naoufal", 24);
	//printf("\n");
	//ft_printf("%s %c%d%c%i%c %u Hel%%oo Again", "Naoufal", 'A', 785, 'd', -87, '9', 12);
	//ft_printf("%s", "Naoufal");
	return (0);
}
