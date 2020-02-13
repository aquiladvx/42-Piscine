/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:21:31 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/17 10:54:47 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putnbr_base(char *str)
{
	int i;
	int norp;
	int total;

	norp = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') || \
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r') || \
			(str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			norp = norp * -1;
		i++;
	}
	while (str[i] >= '0' || str[i] <= '9')
	{
		total = total * 10 + str[i] - '0';
		i++;
	}
	return (total * norp);
}
