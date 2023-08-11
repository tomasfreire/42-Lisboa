/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune  <toantune@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:05:32 by toantune          #+#    #+#             */
/*   Updated: 2023/03/16 10:48:53 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != 0 && s2[i] != 0 && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%d, %d\n", strncmp("A", "AA", 1), ft_strncmp("A", "AA", 1));
}*/
