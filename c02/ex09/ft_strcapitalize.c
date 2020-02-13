/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:11:39 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/15 23:59:45 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] > 96 && str[i] < 123)
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] > 31 && str[i] < 48) || (str[i] > 57 && str[i] < 65) || \
			(str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] < 127))
		{
			if ((str[i + 1] > 96) && (str[i + 1] < 123))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
		if (str[i + 1] > 64 && str[i + 1] < 91)
			str[i + 1] = str[i + 1] + 32;
	}
	return (str);
}
