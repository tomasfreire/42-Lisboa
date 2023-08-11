/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune  <toantune@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:48:07 by toantune          #+#    #+#             */
/*   Updated: 2023/03/06 11:00:18 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "BomDiaMundo";
	int is_alpha = ft_str_is_alpha(str);
	printf("%d\n", is_alpha);
	return (0);
}*/
