/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:23:47 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/23 10:57:53 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *nb;
	int i;
	int len;

	len = max - min;
	if (min >= max)
		return (0);
	nb = malloc(sizeof(min) * len);
	i = 0;
	while (i < len)
	{
		nb[i] = min + i;
		i++;
	}
	return (nb);
}
