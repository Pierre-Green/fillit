/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_inv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelievr <llelievr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 20:46:45 by llelievr          #+#    #+#             */
/*   Updated: 2018/12/08 20:49:53 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3		ft_vec3_inv(t_vec3 v)
{
	return (ft_vec3_mul(v, (t_vec3){-1, -1, -1}));
}