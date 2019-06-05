/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:36:27 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/05 11:03:28 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dest);
	if (len > size)
		return (ft_strlen(src) + size);
	if (len <= size)
	{
		ft_strncat(dest, src, size - (len + 1));
	}
	return (ft_strlen(src) + size);
}
