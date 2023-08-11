/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:36:42 by toantune          #+#    #+#             */
/*   Updated: 2023/03/14 14:20:25 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{	
	int	n;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0 && power == 0)
		return (1);
	n = 1;
	while (power > 0)
	{	
		n *= nb;
		power--;
	}
	return (n);
}

/*int	main(void)
{
    printf("%d\n", ft_iterative_power(2, 4));
    return (0);
}*/
