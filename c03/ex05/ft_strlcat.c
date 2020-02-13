/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:27:47 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/15 16:19:00 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int l;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	k = 0;
	l = i;
	while (k < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (l + j);
}
