#include "ft_printf.h"

int	ft_print_char(va_list arg)
{
	int	c;

	c = va_arg(arg, int);
	return (ft_putchar((char)c));
}

static int	handle_null(void)
{
	char	*s;
	int		i;

	s = "(null)";
	i = 0;
	while (s[i])
	{
		if(ft_putchar(s[i]) < 0)
			return (-1);
		i++;
	}
	return i;
}
int ft_print_str(va_list arg)
{
	char *p;
	int i;
	int total;
	
	i = 0;
	total = 0;
	p = va_arg(arg, char *);
	if (!p)
		return (handle_null());
	while(p[i])
	{
		if(ft_putchar(p[i]) < 0)
			return -1;
		total++;
		i++;
	}
	return total;
}

static int puthex_ptr(uintptr_t n)
{
	int ret;
	int tmp;

	ret = 0;
	if (n >= 16)
	{
		ret = puthex_ptr(n / 16);
		if(ret < 0)
			return -1;
	}
	tmp = ft_putchar("0123456789abcdef"[n % 16]);
	if(tmp < 0)
		return -1;
	return (ret + tmp);
}

int	ft_print_ptr(va_list arg)
{
	void *p;
	uintptr_t n;
	int ret;
	int total;

	total = 0;
	p = va_arg(arg, void *);
	if(!p)
	{
		ret = write(STDOUT_FILENO, "(nil)", 5);
		if (ret < 0)
			return (-1);
		return 5;
	}
	n = (uintptr_t)p;
	ret = write(STDOUT_FILENO, "0x", 2);
	if(ret < 0)
		return (-1);
	total += 2;	
	ret = puthex_ptr(n);
	if(ret < 0)
		return  -1;
	total += ret;
	return (total);
}

int ft_print_percent(va_list arg)
{
	(void)arg;
	return(ft_putchar('%'));
}

//#include <stdio.h>
//int main(void)
//{
//	printf("\nreturn value: %d", puthex_ptr(256));
//}