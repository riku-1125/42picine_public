#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>
# define GNL_EOF 0
# define ERROR -1
char	*get_next_line(int fd);
int		has_newline(char *stash);
ssize_t	gnl_strlen(char *str);
void	gnl_strcpy(char *dst, char *src, ssize_t n);
#endif
