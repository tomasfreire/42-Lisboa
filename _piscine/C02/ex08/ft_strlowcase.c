/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune  <toantune@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:04:50 by toantune          #+#    #+#             */
/*   Updated: 2023/03/07 12:00:35 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (ptr);
}

/*int	main(void)
{
	char str[] = "This is My String";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}*/
