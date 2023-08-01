/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 07:11:38 by toantune          #+#    #+#             */
/*   Updated: 2023/04/28 13:38:37 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;
	size_t	size;
	size_t	i;

	slen = ft_strlen(s);
	if (start >= slen)
		size = 1;
	else if (len > (slen - start))
		size = (slen - start) + 1;
	else
		size = len + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
		return (ptr);
	i = 0;
	while (size > 1)
	{
		ptr[i++] = s[start++];
		size--;
	}
	ptr[i] = '\0';
	return (ptr);
}
