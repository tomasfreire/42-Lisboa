/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:50:14 by toantune          #+#    #+#             */
/*   Updated: 2023/03/02 16:21:32 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int tab[10] = {0, 3, 4, 5, 9, 7, 8, 6, 2, 1};
	int size = 10;
	ft_sort_int_tab(tab, size);

	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
	printf("\n");
	return (0);
}*/
