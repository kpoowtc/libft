/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:43:05 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/22 13:09:05 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/libft.h"

int ft_isascii(inc c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
