#include <stddef.h>
#include <stdlib.h>

char *	strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while(big[i] && i < len)
	{
		j = 0;
		while(big[i + j] == little[j] && i + j < len && little[j])
			j++;
		if (!little[j])
			return (char *)&big[i];
		i++;
	}
	return NULL;
}
