/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 03:24:47 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/21 16:46:07 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int fib[index * sizeof(int)];

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		fib[0] = 0;
		fib[1] = 1;
		fib[index] = fib[index - 1] + fib[index - 2];
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
