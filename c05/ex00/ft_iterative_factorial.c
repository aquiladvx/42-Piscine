/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:34:44 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/21 16:30:18 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int before;
	int	total;
	int i;

	i = 1;
	before = nb;
	total = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		before--;
		total = total * before;
		i++;
	}
	return (total);
}
