/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 02:05:27 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/21 16:43:40 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		i = 1;
		res = nb;
		while (i < power)
		{
			res = res * nb;
			i++;
		}
		return (res);
	}
}
