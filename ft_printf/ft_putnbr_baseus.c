/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:36:35 by toantune          #+#    #+#             */
/*   Updated: 2023/05/31 18:27:52 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_baseus(unsigned long int nb, char *base, int *len);

static void	ft_putaddr(unsigned long int nb, char *base, int *len)
{
	if (nb > 15)
	{
		ft_putaddr(nb / 16, base, len);
		ft_putaddr(nb % 16, base, len);
	}
	else
		ft_putchar(base[nb], len);
}

void	ft_putnbr_baseus(unsigned long int nb, char *base, int *len)
{
	if (!(void *)nb)
		ft_putstr("(nil)", len);
	else
	{
		ft_putchar('0', len);
		ft_putchar('x', len);
		ft_putaddr(nb, base, len);
	}
}
