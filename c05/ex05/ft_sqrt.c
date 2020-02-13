/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:09:49 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/21 15:26:04 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long smaller;
	long bigger;
	long avar;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	smaller = 0;
	bigger = nb;
	while (smaller <= bigger)
	{
		avar = (smaller + bigger) / 2;
		if (avar * avar == nb)
			return (avar);
		if (avar * avar < nb)
			smaller = avar + 1;
		else
			bigger = avar - 1;
	}
	return (0);
}
