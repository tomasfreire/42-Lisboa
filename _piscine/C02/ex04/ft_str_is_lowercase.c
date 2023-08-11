/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune  <toantune@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:13:28 by toantune          #+#    #+#             */
/*   Updated: 2023/03/06 11:18:26 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}

/*int   main(void)
{
        char str[] = "";
        int is_lowcase = ft_str_is_lowercase(str);
        printf("%d\n", is_lowcase);
        return (0);
}*/
