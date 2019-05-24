/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:26:30 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/24 16:20:26 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/libft.h"

void *ft_memset(void *dest, int c, size_t n)
{
	size_t i;
	char *str;
	
	i = 0;
	str = dest;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
