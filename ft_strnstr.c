/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:29:05 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/05 11:26:48 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)hay;
	n = (char *)nee;
	if (h[i] == '\0')
		return (NULL);
	if (n[i] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < len)
		{
			j++;
			if (n[j] == '\0')
			{
				return (h + i);
			}
			i++;
		}
	}
	return (NULL);
}
