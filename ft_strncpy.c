/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:14:14 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/05 11:33:47 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t a;

	i = 0;
	if (src[i] == '\0')
		return (NULL);
	else
		if (dst[i] == '\0')
			dst = (char *)malloc(ft_strlen(src) * sizeof(char));
	while (src[i] != '0' && (i < n))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	a = ft_strlen(dst) - i;
	dst[i + a] = '\0';
	return (dst);
}
