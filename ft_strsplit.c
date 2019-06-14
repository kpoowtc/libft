/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:57:12 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/14 14:07:47 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strsplit(char const *s, char c)
{
	char	**fresh;
	size_t	size;
	int		i;
	int		start;

	if (!s || !(fresh = (char **)malloc(sizeof(char *) * (ft_cwords(s, c) + 1))))
		return (NULL);
	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			fresj[size++] = ft_strsub(s, start, i - start);
		}
	}
	fresh[size] = NULL;
	return (fresh);
}
