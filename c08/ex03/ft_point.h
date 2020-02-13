/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:37:07 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/24 17:55:26 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef	struct		s_point
{
	int x;
	int y;
}					t_point;

void				set_point(t_point *point);
#endif
