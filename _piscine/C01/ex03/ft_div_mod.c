/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:08:30 by toantune          #+#    #+#             */
/*   Updated: 2023/03/02 16:15:04 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 48;
	int b = 5;
	int x;
	int y;
	int *div = &x;
	int *mod = &y;
	ft_div_mod(a, b, div, mod);
	printf("o quociente de a por b e = %d\no resto de a por b e = %d\n", x, y);
	return (0);
}*/
