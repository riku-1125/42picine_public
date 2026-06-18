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
		if(**strs >= 'a' && **strs  <= 'z')
			**strs = 'a' + 'z' - **strs;
		if(**strs >= 'A' && **strs  <= 'Z')
			**strs = 'A' + 'Z' - **strs;
		write(1, (*strs)++, 1);
	}
	write(1, "\n", 1);
}
