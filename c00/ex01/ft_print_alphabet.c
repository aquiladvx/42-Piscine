/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 02:30:34 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/04 03:56:49 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}
}
