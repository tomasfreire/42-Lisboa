/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:24:35 by toantune          #+#    #+#             */
/*   Updated: 2023/03/06 11:42:02 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str < 127)
			str++;
		else
			return (0);
	}
	return (1);
}

/*int   main(void)
{
        char str[] = "\n";
        int is_print = ft_str_is_printable(str);
        printf("%d\n", is_print);
        return (0);
}*/
