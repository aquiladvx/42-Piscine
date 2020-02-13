/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:11:23 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/16 17:59:00 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (to_find[i] == '\0')
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			while (str[j + i] == to_find[i])
			{
				if (to_find[i + 1] == '\0')
					return (str + j);
				i++;
			}
		}
		j++;
	}
	return (0);
}
