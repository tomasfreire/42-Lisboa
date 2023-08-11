/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:20:27 by toantune          #+#    #+#             */
/*   Updated: 2023/03/14 10:29:21 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{	
	int	n;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	n = 1;
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}

/*int	main(void)
{
	int	out;
	out = ft_iterative_factorial(9);
	printf("%d\n", out);
	return (0);
}*/
