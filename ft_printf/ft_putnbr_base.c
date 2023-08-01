/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:36:35 by toantune          #+#    #+#             */
/*   Updated: 2023/05/31 14:10:13 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nb, char *base, int *len);

void	ft_putnbr_base(unsigned int nb, char *base, int *len)
{
	if (nb == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	else if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base, len);
		ft_putchar(base[nb % ft_strlen(base)], len);
	}
}
