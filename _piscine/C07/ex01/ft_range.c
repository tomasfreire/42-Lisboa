/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:21:23 by toantune          #+#    #+#             */
/*   Updated: 2023/03/20 08:45:12 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	arr = (int *)malloc((max - min) * 4);
	if (min >= max)
		return (NULL);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

/*int	main(void)
{
	int	min = 8;
	int	max = 15;
	int	*out;
	
	out = ft_range(min, max);
	
	int	size = max - min;
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", out[i]);
	}
}*/
