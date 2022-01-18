/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:58:51 by smia              #+#    #+#             */
/*   Updated: 2021/12/11 03:24:50 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned_int(unsigned int nb, int *len)
{
	if (nb <= 9)
		ft_putchar(nb + 48, len);
	else
	{
		ft_put_unsigned_int(nb / 10, len);
		ft_put_unsigned_int(nb % 10, len);
	}
}
