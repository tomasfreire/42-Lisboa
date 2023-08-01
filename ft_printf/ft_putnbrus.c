/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:37:27 by toantune          #+#    #+#             */
/*   Updated: 2023/05/31 18:28:58 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrus(unsigned int nbr, int *len);

void	ft_putnbrus(unsigned int nbr, int *len)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
	else
		ft_putchar(nbr + '0', len);
}
