/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:27:13 by smia              #+#    #+#             */
/*   Updated: 2021/12/11 03:22:55 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlowhex(unsigned int nb, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_putlowhex(nb / 16, len);
		ft_putlowhex(nb % 16, len);
	}
}
