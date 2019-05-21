/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:29:48 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/20 14:43:23 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>
#include "./../includes/libft.h"

int main(void)
{
	char *test;
	char *dest;
	char *src;

	dest = "food";
	src = "good";

	test = "kgolagano";
	printf("%c\n", *ft_strcpy(dest,src));
	printf("%zu\n", ft_strlen(test));
	return (0);
}
