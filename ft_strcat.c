/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:20:39 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/27 11:10:15 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int a;

	i = 0;
	a = 0;

	while (s1[i])
		i++;
	while (s2[i])
	{
		s1[a + i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

