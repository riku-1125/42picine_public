#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
    char            *key;
    char            *value;
    struct s_dict   *next;
}   t_dict;


char    *ft_read_line(int fd);
char    *ft_trim(char *str);
int     ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
t_dict  *parse_dict(char *filename);
char    *dict_get(t_dict *dict, char *key);
char    *convert_number(char *num_str, t_dict *dict);
char    *str_join(char *a, char *b);

#endif
