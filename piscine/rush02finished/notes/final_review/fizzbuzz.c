#include <unistd.h>

void putnbr(int nb)
{
	if(nb >= 10)
		putnbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb , 1);
}

int main(void)
{
	int n = 1;
	while(n <= 100)
	{

	}
}
