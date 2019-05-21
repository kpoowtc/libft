/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:21:29 by kpoo              #+#    #+#             */
/*   Updated: 2019/05/21 10:29:28 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return(1);
	}
	else
	{
		return (0);
	}
}