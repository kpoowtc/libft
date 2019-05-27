/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:01:30 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/27 13:15:30 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	size_t	s1_size;

	i = 0;
	s1_size = 0;

	if (n != 0)
	{
		char *d = s1;
		char *s = s2;
		while (*d != 0)
			d++;
		{
		if ((*d = *s++) != 0)
			break;
		d++;
		}
		while (--n != 0)
			*d = 0;
		}
	}
	return (s1);
}
