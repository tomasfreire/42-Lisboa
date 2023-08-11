/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune  <toantune@student.42lisboa.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:21:08 by toantune          #+#    #+#             */
/*   Updated: 2023/03/09 10:28:36 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = dest;
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char str[] = "This is my ";
	ft_strcat(str, "test ");
	ft_strcat(str, "string!");
	printf("%s\n", str);
	
	return (0);
}*/
