/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:55:32 by toantune          #+#    #+#             */
/*   Updated: 2023/03/02 16:20:36 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 10;
	ft_rev_int_tab(arr, size);
	for (int i = 0 ; i  < size; i++)
		printf("%d",arr[i]);
	printf("\n");
	return (0);
}*/
