/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:29:48 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/27 13:42:27 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	/*
	//(1) ft_strlen_testing - done
	char *test;
	test = "Coolie";
	//printf("%zu\n", strlen(test));
	//printf("%zu\n", ft_strlen(test));

	printf("\n"); //nextline

	//(2) ft_strcpy_testing - done
	char *dest;
	char *src;
	dest = "food";
	src = "good";
	//printf("%s\n", strcpy(dest, src));
	//printf("%s\n", ft_strcpy(dest, src));

	printf("\n"); //nextline

	//(3) ft_isdigit_testing - done
	//printf("%d\n", isdigital(91));
	//printf("%d\n", ft_isdigit(91));
	
	printf("\n"); //nextline

	//(4) ft_isalpha - done
	//printf("%d\n", isalpha(0));
	//printf("%d\n", ft_isalpha(0));

	printf("\n"); //nextline

	//(5) ft_isalnum_testing - done
	//printf("%d\n", isalnum('A'));
	//printf("%d\n", ft_isalnum('A'));

	printf("\n"); //nextline

	//(6) ft_isascii_testing - done
	//printf("%d\n", isascii('$'));
	//printf("%d\n", ft_isascii('$'));
	
	printf("\n"); //nextline

	//(7) ft_isprint_testing - done
	//printf("%d\n", isprint(' '));
	//printf("%d\n", ft_isprint(' '));
	
	printf("\n"); //nextline

	//(8) ft_putchar_testing - done
	ft_putchar('C');

	printf("\n"); //nextline

	//(9) ft_putstr_testing - not done
	ft_putstr("kgolagano");

	//(10) ft_toupper_testing - done
	printf("%c\n", ft_toupper('?'));


	printf("\n"); //nextline

	//(11) ft_tolower_testing - done
	//printf("%c\n", ft_tolower('?'));

	printf("\n"); //nextline

	//(12) ft_memset_testing - done
	char str[50] = "Testing";
 	printf("%s\n", ft_memset(str, '@', 3));

	//(13) ft_bzero_testing - not done
	ft_bzero("cool", 2);
	*/

	//(14) ft_strcat_testing - done
	//char to[100] = "Hello!";
	//char from[100] = " Khuli";
	//printf("%s\n", strcat(to, from));
	//printf("%s\n", ft_strcat(to, from));
	
	//printf("\n"); //nextline

	//(15) ft_strncat_testing - not done
	//printf("%s\n", strncat(to, from, 6));
	//printf("%s\n", ft_strncat(to, from, 6));

	printf("\n"); //nextline

	//(16) ft_strchr_testing - not done
	printf("%s\n", strchr("Hello", 'e'));
	printf("%s\n", ft_strchr("Hello", 'e'));

	return (0);
}
