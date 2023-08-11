/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:25:45 by toantune          #+#    #+#             */
/*   Updated: 2023/03/02 16:16:01 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a / *b;
	n2 = *a % *b;
	*a = n1;
	*b = n2;
}

/*int	main(void)
{
	int n1 = 42;
	int n2 = 3;
	int *p1 = &n1;
	int *p2 = &n2;
	ft_ultimate_div_mod(p1, p2);
	printf("a = %d\nb = %d\n", n1, n2);
	return (0);
}*/
