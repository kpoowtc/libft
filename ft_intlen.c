/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:49:45 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/19 18:28:23 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	if (n < 0)
	{
		i++;
	}
	return (i);
}
