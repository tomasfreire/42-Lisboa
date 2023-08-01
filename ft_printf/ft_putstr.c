/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:38:14 by toantune          #+#    #+#             */
/*   Updated: 2023/05/31 17:47:15 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len);

void	ft_putstr(char *str, int *len)
{
	if (!str)
		ft_putstr("(null)", len);
	else
	{
		while (*str)
		{
			ft_putchar(*str, len);
			str++;
		}
	}
}
