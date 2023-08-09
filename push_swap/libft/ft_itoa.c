/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:30:18 by toantune          #+#    #+#             */
/*   Updated: 2023/04/24 12:59:23 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	get_size(int n)
{
	int	size;

	if (n <= 0)
		size = 2;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*nbr;

	sign = is_negative(n);
	size = get_size(n);
	nbr = (char *)malloc(sizeof(char) * size);
	if (!nbr)
		return (NULL);
	if (n == 0)
		nbr[0] = '0';
	nbr[--size] = '\0';
	while (n)
	{
		nbr[--size] = 48 + ft_abs(n % 10);
		n /= 10;
	}
	if (sign)
		nbr[--size] = '-';
	return (nbr);
}
