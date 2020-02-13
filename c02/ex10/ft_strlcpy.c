/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:02:54 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/16 00:07:38 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		j;
	int					i;
	int					k;

	i = 0;
	while (src[i])
	{
		i++;
	}
	j = 0;
	while (j < size)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	k = i;
	return (k);
}
