/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:07:39 by smia              #+#    #+#             */
/*   Updated: 2021/12/11 10:27:58 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putuphex(unsigned int nb, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putpointer(unsigned long long nb, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putlowhex(unsigned int nb, int *len);
void	ft_putchar(char c, int *len);
void	ft_put_unsigned_int(unsigned int nb, int *len);

#endif
