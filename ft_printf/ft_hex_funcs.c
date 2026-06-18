#include "ft_printf.h"

static int	put_hex_low(unsigned int n)
{
	int len;
	int tmp;

	len = 0;
	if (n >= 16)
	{
		tmp = put_hex_low(n / 16);
		if (tmp < 0)
			return (-1);
		len += tmp;
	}
	tmp = ft_putchar("0123456789abcdef"[n % 16]);
	if (tmp < 0)
		return (-1);
	return (tmp + len);
}

int	ft_print_hex_low(va_list arg)
{
	unsigned int	n;

	n = va_arg(arg, unsigned int);
	return (put_hex_low(n));
}

static int	put_hex_up(unsigned int n)
{
	int len;
	int tmp;

	len = 0;
	if (n >= 16)
	{
		tmp = put_hex_up(n / 16);
		if (tmp < 0)
			return (-1);
		len += tmp;
	}
	tmp = ft_putchar("0123456789ABCDEF"[n % 16]);
	if (tmp < 0)
		return (-1);
	return (tmp + len);
}

int	ft_print_hex_up(va_list arg)
{
	unsigned int	n;

	n = va_arg(arg, unsigned int);
	return (put_hex_up(n));
}



//#include <stdio.h>
//#include <stdarg.h>
//int func(char *s, ...)
//{
//	int i;

//	va_list args;
//	va_start(args, s);
//	i = ft_print_hex_low(args);
//	va_end(args);
//	return i;
//}

//int	main(void)
//{
//	printf("%d", func("asdf", 15));
//	return (0);
//}