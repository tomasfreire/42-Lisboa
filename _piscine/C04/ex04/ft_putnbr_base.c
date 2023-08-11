/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:45:44 by toantune          #+#    #+#             */
/*   Updated: 2023/03/22 16:01:46 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_duplicate(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j <= len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	base_is_valid(char *base)
{
	char	*bs;

	bs = base;
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		base++;
	}
	if (check_duplicate(bs))
		return (0);
	else if (ft_strlen(bs) < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	nb = (long int)nbr;
	if (base_is_valid(base) == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0)
	{
		if (nb == 0)
		{
			ft_putchar('0');
			return ;
		}
		else if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

/*int     main(void)
{

	printf("\nTEST | base_is_vaid\n");
	printf("want : %d | got : %d\n", 0, base_is_valid("012-4"));
	printf("want : %d | got : %d\n", 0, base_is_valid("01+34"));
	printf("want : %d | got : %d\n", 0, base_is_valid("01223"));
	printf("want : %d | got : %d\n", 0, base_is_valid("0"));
	printf("want : %d | got : %d\n", 0, base_is_valid(""));
	printf("want : %d | got : %d\n", 1, base_is_valid("0123456789ABCDEF"));
	printf("\nTEST | ft_putnbr_base\n");
        \\ft_putnbr_base(25, "01234+56");
	printf("\n");
        ft_putnbr_base(25, "012-");
	printf("\n");
        ft_putnbr_base(25, "0");
	printf("\n");
        ft_putnbr_base(25, "");
	printf("\n");
        ft_putnbr_base(25, "01233456");
	\\printf("\n");
        ft_putnbr_base(19783, "0123456789abcdef");
	printf("\n");
        ft_putnbr_base(-19783, "0123456789abcdef");
	printf("\n");
        ft_putnbr_base(0, "0123456789abcdef");
	printf("\n");
        return (0);
}*/
