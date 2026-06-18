#include <unistd.h>

int main(int argc, char **argv)
{
	char **strs = argv;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	strs++;

	while(**strs)
	{
		if((**strs >= 'a') && (**strs <= 'z'))
			**strs = (**strs - 'a' + 13) % 26 + 'a';
		
		else if((**strs >= 'A') && (**strs <= 'Z'))
			**strs = (**strs - 'A' + 13) % 26 + 'A';
		write(1, *strs, 1);
		(*strs)++;
	}
	write(1, "\n", 1);
	return 0;
}
