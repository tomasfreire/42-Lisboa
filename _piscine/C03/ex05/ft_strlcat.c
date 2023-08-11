/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:35:11 by toantune          #+#    #+#             */
/*   Updated: 2023/03/22 13:53:24 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ssize;
	unsigned int	dsize;
	unsigned int	i;

	dsize = 0;
	while (dest[dsize])
		dsize++;
	ssize = 0;
	while (src[ssize])
		ssize++;
	if (size <= dsize)
		return (ssize + size);
	i = 0;
	while (src[i] && (dsize + i) < size - 1)
	{
		dest[dsize + i] = src[i];
		i++;
	}
	dest[dsize + i] = '\0';
	return (dsize + ssize);
}

/*int	main(void)
{
	char str[50] = "This is ";
	printf("%d, %s\n", ft_strlcat(str, "my test ", 50), str);
	printf("%d, %s\n", ft_strlcat(str, "String!", 50), str);
	return(0);
}*/
