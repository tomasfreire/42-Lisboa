/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/04/13 11:51:24 by toantune	       #+#    #+#	      */
/*   Updated: 2023/04/26 19:57:16 by toantune         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
