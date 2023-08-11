/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune  <toantune@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:19:36 by toantune          #+#    #+#             */
/*   Updated: 2023/03/06 11:23:40 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}

/*int   main(void)
{
        char str[] = "";
        int is_uppcase = ft_str_is_uppercase(str);
        printf("%d\n", is_uppcase);
        return (0);
}*/
