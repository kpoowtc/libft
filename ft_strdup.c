/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:17:14 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/28 12:26:14 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.H"

char		*strdup(const char *s1)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	str = (char*)malloc(sizeof(*s1) * (len + 1));
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
