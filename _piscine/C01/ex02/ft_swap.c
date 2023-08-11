/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:57:51 by toantune          #+#    #+#             */
/*   Updated: 2023/03/02 16:22:56 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int n1;
	int n2;

	n1 = 24;
	n2 = 42;
	printf("n1 = %d\nn2 = %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("n1 = %d\nn2 = %d\n", n1, n2);
	return (0);
}*/
