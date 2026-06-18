/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtakaki <shtakaki@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:43:22 by yakaki            #+#    #+#             */
/*   Updated: 2026/04/05 13:58:17 by shtakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}	t_dict;

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_trim(char *str);
char	*ft_read_line(int fd);

char	*ft_strdup(char *s);
char	*ft_strndup(char *s, int n);
int		ft_strcmp(char *s1, char *s2);
int		ft_isdigit(char c);

t_dict	*parse_dict(char *filename);
char	*dict_get(t_dict *dict, char *key);
void	free_dict(t_dict *dict);
char	*str_join(char *a, char *b);

char	*convert_number(char *num_str, t_dict *dict);

void	ft_putstr(char *s);
int		validate(char *s);

char	*int_to_key(int n);
char	*convert_3digits(int n, t_dict *dict);
char	*convert_number(char *num, t_dict *dict);
#endif
