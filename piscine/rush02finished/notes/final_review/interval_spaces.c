#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc != 2 )
	{
		write(1, "\n", 1);
		return 0;
	}
	argv++;
	while(**argv)
	{
		write(1, *argv, 1);
		(*argv)++;
		if(**argv != 0)
			write(1, "   ", 3);
	}
	write(1, "\n", 1);
	return 0;
}
