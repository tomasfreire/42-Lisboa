/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:43:51 by toantune          #+#    #+#             */
/*   Updated: 2023/03/14 13:51:40 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int	main(void)
{
    printf("%d\n", ft_fibonacci(8));
    return (0);
}*/
