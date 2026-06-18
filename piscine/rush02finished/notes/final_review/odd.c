#include <unistd.h>

int main(void)
{
	char n = '1';

	while(n <= '9')
	{
		if ((n - '0') % 2 == 1)
			write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
	return 0;
}
