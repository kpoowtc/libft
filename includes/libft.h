/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:00:13 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/24 15:10:41 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

//strlen, strnlen -- fint length of string | #include <string.h> 
	size_t ft_strlen(const char *str);

//memset -- fill a byte string with a byte value | #include <string.h>
	void *ft_memset(void *b, int c, size_t len);

//bzero -- write zeroes to a byte string
	void ft_bzero(void *s, size_t n);

//memcpy -- copy memory area | #include <string.h>
	void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

//memccpy -- copy string until character found | #include <string.h>
	void *ft_memccpy(void *restrict dst, const void *restrict src, int c, sixe_t n);

//memmove -- copy byte string | #include <string.h>
	void *ft_memmove(void *dst, const void *src, size_t len);

//memchr -- locate byte in byte string | #include <string.h>
	void *ft_memchr(const void *s, int c, size_t n);

//memcmp -- compare byte string | #include <string.h>
	int ft_memcmp(const void *s1, const void *s2, size_t n);

//strdup, strndup -- save a copy of a string | #include <string.h>
	char *ft_strdup(const char *s1);
	//char *ft_strndup(const char *s1, size_t); -- (remove comment to enable)

//stpcpy, stpncpy, strcpy, strncpy -- copy strings | #include <string.h>
	//char *ft_stpcpy(char *dst, const char *src); -- (remove comment to enable)
	//char *ft_stpncpy(char *dst, const char *src, size_t len); -- (remove comment to enable)
	char *ft_strcpy(char *dst, const char *src);
	char *ft_strncpy(chat *dst, const char *src, size_t len);

//strcat, strncat -- concatenate/link strings | #include <string.h>
	char *ft_strcat(char *restrict s1, const char *restrict s2);
	char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

//strlcpy, strlcat -- size-bounded/size-limited copying and concatenation/linking | #include <string.h>
	//size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize); -- (remove comment to enable)
	size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);

//strchr, strrchr -- locate character in string | #include <string.h>
	char *ft_strchr(const char *s, int c);
	char *ft_strrchr(const char *s, int c);

//strstr, strcasestr, strnstr -- locate a substring in a string | #include <string.h>
	char *ft_strstr(const char *haystack, const char *needle);
	//char *ft_strcasestr(const char *haystack, const char *needle); -- (remove comment to enable)
	//char *ft_strnstr(const char *haystack, const char *needle, size_t len); -- (remove comment to enable)

//strcmp. strncmp -- compare strings | #include <string.h>
	int ft_strcmp(const char *s1, const char *s2);
	int ft_strncmp(const char *s1, const char *s2, size_t n);

//atoi, atoi_l -- convert ASCII string to integer | #include <stdlib.h>
	int ft_atoi(const char *str);
	//int ft_atoi_l(const char *str, locale_t loc); -- (remove comment to enable) //use #include <xlocale.h>

//isalpha -- alphabetic character test | #include <ctype.h>
	int ft_isalpha(int c);

//isdigit, isnumber -- decimal-digit character test | #include <ctype.h>
	int ft_isdigit(int c);
	//int ft_isnumber(int c); -- (remove comment to enable)

//isalnum -- alphanumeric character test | #include <ctype.h>
	int ft_isalnum(int c);

//isascii -- test for ASCII character | #include <ctype.h>
	int ft_isascii(int c);

//isprint -- printing character test (space character inclusive) | #include <ctype.h>
	int ft_isprint(int c);

//toupper, toupper_l -- lower case to upper case letter conversion | #include <ctype.h>
	int ft_toupper(int c);
	//int ft_toupper_l(int c, locale_t loc); -- (remove comment to enable) use #include <ctype.h> & #include <xlocale.>


//ADDITIONAL FUNCTIONS -----------------------------------------------------------------------------------------------

//memalloc -- 
	void *ft_memalloc(size_t size);

//memdel --
	void ft_memdel(void **ap);

//strnew --
	char *ft_strnew(size_t size);

//strdel --
	void ft_strdel(char **as);

//strclr --
	void ft_strclr(char *s);

//striter --
	void ft_striter(char *s, void (*f)(char *));

//striteri --
	void ft_striteri(char *s, void (*f)(unsigned int, char *));

//strmap --
	char *ft_strmap(char const *s, char (*f)(char));

//strmapi --
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

//strequ --
	int ft_strequ(char const i*s1, char const *s2);

//strnequ --
	int ft_strnequ(char const *s1, char const *s2, size_t n);

//strsub --
	char *ft_strsub(char const *s, unsigned int start, size_t len);

//strjoin --
	char *ft_strjoin(char const *s1, char const *s2);

//strtrim --
	char *ft_strtrim(char const *s);

//strsplit --
	char **ft_strsplit(char const *s, char c);

//itoa --
	char *ft_itoa(int n);

//putchar -- output a character or a word to a stream | #include <stdio.h>
	void ft_putchar(char c);

//putstr -- output a string
	void ft_putstr(char const *str);

//putendl --
	void ft_putendl(char const *s);

//ft_putnbr --
	void ft_putnbr(int n);

//putchar_fd --
	void ft_putchar_fd(char c, int fd);

//putstr_fd --
	void ft_putstr_fd(char const *s, int fd);

//putendl_fd --
	void ft_putendl(char const *s, int fd);

//putnbr_fd --
	void ft_putnbr_fd(int n, int fb);


//FUNCTIONS THAT ALLOW LIST MANIPULATION ------------------------------------------------------------------------------

//lstnew --
	t_list *ft_lstnew(void const *content, size_t content_size);

//lstdelone --
	void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

//lstdel --
	void ft_lstdel(t_list **alst, void (*del)(void *, size_t));

//lstadd --
	void ft_lstadd(t_list **alst, t_list *new);

//lstiter --
	void ft_lstiter(t_list *lst, void (*f)(t_list *elem));

//lstmap --
	t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
