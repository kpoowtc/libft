/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:00:13 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/23 13:49:17 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(const char *str);
//char *ft_strcpy(char *dest, const char *src);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void ft_putchar(char c);
void ft_putstr(char const *str);
int ft_toupper(int c);
int ft_tolower(int c);
