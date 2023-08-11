/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:18:33 by toantune          #+#    #+#             */
/*   Updated: 2023/03/01 14:39:22 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printnbrs(int n, int m)
{
	char	x;
	char	y;

	x = n / 10 + '0';
	y = n % 10 + '0';
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, " ", 1);
	x = m / 10 + '0';
	y = m % 10 + '0';
	write(1, &x, 1);
	write(1, &y, 1);
	if (!(n == 98 && m == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			printnbrs(i, j);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
