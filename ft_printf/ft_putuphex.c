/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:08:57 by smia              #+#    #+#             */
/*   Updated: 2021/12/10 03:33:15 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuphex(unsigned int nb, int *len)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_putuphex(nb / 16, len);
		ft_putuphex(nb % 16, len);
	}
}
