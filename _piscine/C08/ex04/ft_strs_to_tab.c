/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:07:39 by toantune          #+#    #+#             */
/*   Updated: 2023/03/22 09:44:30 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(array[i].str);
		i++;
	}
	array[i].str = 0;
	return (array);
}

/*int	main()
{
	char	*str[4] = {"String1", "String2", "String3", "String4"};
	t_stock_str	*strt = ft_strs_to_tab(4, str);
	for (int i = 0; i < 4; i++)
		printf("size : %d | str : %s | copy : %s\n", 
strt[i].size, strt[i].str, strt[i].copy);
}*/
