/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:52:06 by toantune          #+#    #+#             */
/*   Updated: 2023/03/14 13:57:46 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{	
	int	n;

	if (nb == 0)
		return (0);
	n = 1;
	while (n < nb / n)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	return (0);
}*/
