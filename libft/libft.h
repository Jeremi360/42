/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:54:57 by jbiernac         #+#    #+#             */
/*   Updated: 2024/02/29 15:22:38 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# define SIZE_MAX 18446744073709551615UL

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* FUNCTIONS */

/* BONUS */
t_list				*ft_lstlast(t_list *list);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
t_list				*ft_lstnew(void *content);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/* PART 2 */
void				ft_putendl_fd(char *str, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strtrim(const char *s1, const char *set);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				ft_putnbr_fd(int n, int fd);

/* PART 1 */
char				*ft_strdup(const char *s1);
void				*ft_calloc(size_t count, size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *str);
char				*ft_strnstr(const char *hay, const char *x, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *str, int c);
int					ft_strlcpy(char *dst, const char *src, size_t size);
int					ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(char const *str);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);

#endif
