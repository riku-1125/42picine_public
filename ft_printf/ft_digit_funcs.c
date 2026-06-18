#include "ft_printf.h"
static int put_minus(long *nb)
{
    if(*nb < 0)
    {
        return (*nb = -*nb, ft_putchar('-'));
    }
    return 0;
}

static int ft_putnbr(long nb)
{
    int ret;
    int tmp;
    char c;

    ret = put_minus(&nb);
    if (ret < 0)
        return (-1);
    if(nb >= 10)
    {
        tmp = ft_putnbr(nb / 10);
        if(tmp < 0)
            return -1;
        ret += tmp;
    }
    c = nb % 10 + '0';
    tmp = ft_putchar(c);
    if(tmp < 0)
		return -1;
    return (ret + tmp);
}

int ft_print_int(va_list arg)
{
    int n;
    n = va_arg(arg, int);
    return ft_putnbr((long)n);
}

static int	ft_put_unsigned(unsigned int n)
{
	int len;
	int tmp;

	len = 0;
	if (n >=10)
	{
		tmp = ft_put_unsigned(n / 10);
		if (tmp < 0)
			return -1;
		len += tmp;
	}
	tmp = ft_putchar(n % 10 + '0');
	if (tmp < 0)
		return (-1);
	return (len + tmp);
}

int	ft_print_unsigned(va_list arg)
{
	unsigned int n;

	n = va_arg(arg, unsigned int);
	return (ft_put_unsigned(n));
}