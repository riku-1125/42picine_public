#include <stdlib.h>

int is_sep(char c)
{
	if(c == ' ' || c == '\n' || c == '\t')
		return 1;
	return 0;
}




int word_len(char *str)
{
	int i = 0;
	while(str[i] && !is_sep(str[i]))
		i++;
	return i;
}


char    **ft_split(char *str)
{
	char	*tmp = str;
	int		array = 0;
	int		in_word = 0;
	char	**p;
	int		i = 0;
	int		j;
	while(*tmp)
	{
		if(!is_sep(*tmp) && !in_word)
		{
			in_word = 1;
			array += 1;
		}
		if(is_sep(*tmp) && in_word)
			in_word = 0;
		tmp++;
	}
	p = malloc(sizeof(char*) * (array + 1));
	if(!p)
		return NULL;
	while(i < array)
	{
		j = 0;
		while(is_sep(*str))
				str++;
		p[i] = malloc(sizeof(char) * word_len(str) + 1);
		if(!p[i])
		{	
			while(i >= 0)
			{
				free(p[--i]);
			}
			free(p);
			return NULL;
		}
		while(*str && !is_sep(*str))
		{
			p[i][j] = *str;
			j++;
			str++;
		}
		p[i][j] = '\0';
		i++;
	}
	p[i] = NULL;
	return p;
}
