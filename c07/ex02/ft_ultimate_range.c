/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 06:02:34 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/23 19:06:34 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *res;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = (int *)malloc(size * sizeof(*res));
	i = 0;
	while (i < size)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (size);
}
