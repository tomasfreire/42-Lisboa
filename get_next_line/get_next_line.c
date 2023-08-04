/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:29:08 by toantune          #+#    #+#             */
/*   Updated: 2023/08/04 15:47:21 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"


static char	*go_get_line(int lbrk, char *buff, int fd)
{
	int	i;
	int	j;
	char	*line;

	line = NULL;
	while (!lbrk && (buff[0] || read(fd, buff, BUFFER_SIZE)))
	{
		i = 0;
		j = 0;
		line = ft_strjoin(buff, line);
		while (buff[i])
		{
			if (lbrk)
			{
				buff[j] = buff[i];
				j++;
			}
			if (buff[i] == '\n')
				lbrk = 1;
			buff[i] = 0;
			i++;
		}
	}
	return (line);
	
}

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;
	int		lbrk;	
	int		i;
	
	lbrk = 0;
	line = NULL;
	if ((read(fd, 0, 0) < 0) && BUFFER_SIZE <= 0)
	{
		i = 0;
		while (buff[i])
		{
			buff[i] = 0;
			i++;
		}
		/* ft_memset(buff, 0); */
		return (NULL);
	}
	line = go_get_line(lbrk, buff, fd);
	return (line);
}
