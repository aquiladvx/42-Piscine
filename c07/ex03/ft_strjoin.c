/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 06:25:21 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/23 15:48:44 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *sep)
{
	int i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int		arlen(char **strs, int size)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

char	*mal(int size, char **strs, char *sep)
{
	char	*res;
	int		ar;
	int		str;

	ar = arlen(strs, size);
	str = ft_strlen(sep);
	if (size == 0)
		res = (char *)malloc(1);
	else
		res = (char *)malloc((ar + str) * sizeof(char *));
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*res;

	res = mal(size, strs, sep);
	if (size == 0)
		return (res);
	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			res[++k] = strs[i][j];
		l = -1;
		if (i != size - 1)
		{
			while (sep[++l])
				res[++k] = sep[l];
		}
	}
	res[++k] = '\0';
	return (res);
}
