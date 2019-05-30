/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:29:05 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/30 16:42:57 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	size;

	if (*s2 == 0)
		return ((char *)s1);
	size = ft_strlen(s2);
	if (size == 0)
		return ((char *)s1);
	if (size > len)
		return (NULL);
	while (*s1 != 0 && len-- >= len2)
	{
		if ( == *s2 && ft_memcmp(s1, s2, len2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
