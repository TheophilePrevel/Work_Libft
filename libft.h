#ifndef LIBFT_H
# define LIBFT_H

size_t	ft_strlen(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(char c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*strchr(const char *s, int c);
int	strncmp(const char *s1, const char *s2, size_t n);
int	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	strlcat(char *dst, const char *src, size_t dstsize);


#endif
