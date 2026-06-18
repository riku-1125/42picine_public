#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

#ifdef TEST
int	main(void)
{
	char *s = "hello";
	ft_putstr(s);
	return 0;
}
#endif
