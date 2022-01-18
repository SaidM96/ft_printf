/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:21:13 by smia              #+#    #+#             */
/*   Updated: 2021/12/11 10:39:05 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(unsigned long long nb, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_putpointer(nb / 16, len);
		ft_putpointer(nb % 16, len);
	}
}
