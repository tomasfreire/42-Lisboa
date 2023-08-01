/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:29:08 by toantune          #+#    #+#             */
/*   Updated: 2023/07/31 18:37:09 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buff = NULL;
	static int	buff_rd = 0;
	int		index;
	char		*line;
	
	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	while (1)
	{
		if (buff == NULL)
		{
			buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
			if (!buff)
				return (NULL);
			buff_rd = read(fd, buff, BUFFER_SIZE);
			buff[buff_rd] = '\0';
		}
		if (buff_rd <= 0)
		{
			//free(buff);
			return (NULL);
		}
		index = check_line_break(buff);
		if (index > 0)
		{
			line = ft_strjoin(buff, index, line);
			clean_buffer(buff, index);
			return (line);
		}
		line = ft_strjoin(buff, buff_rd, line);
		clean_buffer(buff, buff_rd);
	}
}
