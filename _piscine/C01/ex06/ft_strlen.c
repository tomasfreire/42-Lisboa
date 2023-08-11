/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:42:53 by toantune          #+#    #+#             */
/*   Updated: 2023/03/02 16:19:40 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	if (*str == 0)
		return (0);
	else
		return (1 + ft_strlen(str + 1));
}

/*int	main(void)
{
	char str[] = "This";
	int len = ft_strlen(str);
	printf("the len is: %d\n", len);
	return (0);
}*/
