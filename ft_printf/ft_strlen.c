/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:38:54 by toantune          #+#    #+#             */
/*   Updated: 2023/05/29 17:46:57 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlen(const char *str)
{	
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
