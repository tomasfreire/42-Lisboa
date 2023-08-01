/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:04:58 by toantune          #+#    #+#             */
/*   Updated: 2023/04/26 19:54:45 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{	
	void	*pts;

	pts = (void *)s;
	while (n--)
	{
		if (*(unsigned char *)pts == (unsigned char)c)
			return ((void *)pts);
		++pts;
	}
	return (NULL);
}
