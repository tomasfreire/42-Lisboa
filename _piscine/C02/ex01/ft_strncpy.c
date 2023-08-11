/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:08:03 by toantune          #+#    #+#             */
/*   Updated: 2023/03/06 12:35:25 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char *src;
	char dest1[10];
	char dest2[10];

	int n = 4;
	src = "This is my string";

	ft_strncpy(dest1, src, n);
	printf("%s\n", dest1);

	strncpy(dest2, src, n);
	printf("%s\n", dest2);
	return (0);
}*/
