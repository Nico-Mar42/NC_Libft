/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:56:50 by nicolmar          #+#    #+#             */
/*   Updated: 2024/11/05 10:09:23 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <bsd/string.h>
# include <unistd.h>
# include <fcntl.h>
# include <ctype.h>
# include <stdarg.h>
# include <limits.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2048
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// -> ft_is
int			ft_is_in_set(char const *s, char const *set);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_iswhitespace(int c);
// -> ft_lst
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);
// -> ft_mem
void		*ft_bzero(void *str, size_t n );
void		*ft_calloc(size_t elementCount, size_t elementSize);
void		ft_free_array(void **array);
void		*ft_memchr(const void *mB, int sC, size_t size);
int			ft_memcmp(const void *str1, const void *str2, size_t size);
void		*ft_memcpy(void *dest, const void *src, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *str, int v, size_t n);
// -> ft_other
int			ft_printf(const	char *format, ...);
long		printpoint(char c, unsigned long d);
int			printhexa(char c, unsigned int d);
int			printchar(char c);
int			printint(int d);
int			printusint(unsigned int d);
char		*get_next_line(int fd);
// -> ft_put
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(char *s);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
// -> ft_str
char		**split1(char **dest, size_t len, char const *s, char c);
char		*ft_strchr(const char *str, int schar);
char		*ft_strdup(const char *src);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_strldup(const char *src, size_t len);
size_t		ft_strlen(const char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp( const char *first, const char *second, size_t length);
char		*ft_strnstr(const char *find, const char *search, size_t len);
char		*ft_strrchr(const char *str, int schar);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlen_char(char *str, char c);
// -> ft_to
int			ft_atoi(const char *nptr);
long		ft_atol(const char *nptr);
char		*ft_itoa(long n);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_usitoa(unsigned int n);
char		**ft_lst_to_strtab(t_list *lst);

#endif // FT_PRINTF_H