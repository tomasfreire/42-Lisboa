/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:22:43 by toantune          #+#    #+#             */
/*   Updated: 2023/03/20 08:27:19 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * 4);
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = array;
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (size);
}

/*int	main()
{
	int *arr;	
	int min = 1, max = 11, size = max - min;

	printf("\nTEST | ft_ultimate_range\n");	
	printf("min = max | want : 0  | got : %d\n", ft_ultimate_range(&arr, 10, 10));
	printf("min > max | want : 0  | got : %d\n", ft_ultimate_range(&arr, 10, 9));	
	printf("min < max | want : 10 | got : %d\n", ft_ultimate_range(&arr, min, max));
	

	printf("\nTEST | print range : \n");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");	
}*/
