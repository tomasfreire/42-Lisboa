/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:46:25 by toantune          #+#    #+#             */
/*   Updated: 2023/03/07 13:37:43 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (ptr);
}

/*int   main(void)
{
        char str1[20] = "Bom Dia Mundo";
	ft_strupcase(str1);
        printf("%s\n", str1);
        return (0);
}*/
