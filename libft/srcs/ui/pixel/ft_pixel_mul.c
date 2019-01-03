/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_mul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelievr <llelievr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 17:59:13 by llelievr          #+#    #+#             */
/*   Updated: 2018/12/06 19:38:05 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pixel		ft_pixel_mul(t_pixel a, t_pixel b)
{
	a.x += b.x;
	a.y += b.y;
	return (a);
}
