/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 06:06:17 by toantune          #+#    #+#             */
/*   Updated: 2023/03/14 06:09:09 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	nbr = 0;
	while (is_numeric(*str))
	{
		nbr = nbr * 10 + (*str - 48);
		str++;
	}
	return (nbr * sign);
}

/*int main(void)
{
	char str[] = "    -+-++--+-561278tyhvha";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
