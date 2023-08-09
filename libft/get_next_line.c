/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:10:38 by toantune          #+#    #+#             */
/*   Updated: 2023/08/09 13:51:46 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd);

static int	check_line_break(const char *buff)
{
	int	i;

	if (!buff)
		return (0);
	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] == '\n')
		i++;
	return (i);
}

static char	*ft_strjoin_gnl(char *buff, char *line)
{
	char	*new_line;
	int		buff_sz;
	int		line_sz;
	int		i;
	int		j;

	new_line = NULL;
	if (!buff)
		return (NULL);
	buff_sz = check_line_break(buff);
	line_sz = check_line_break(line);
	new_line = (char *)malloc(sizeof(char) * (buff_sz + line_sz + 1));
	if (!new_line)
		return (NULL);
	i = -1;
	while (++i < line_sz)
		new_line[i] = line[i];
	j = -1;
	while (++j < buff_sz)
		new_line[i++] = buff[j];
	new_line[i] = '\0';
	free(line);
	return (new_line);
}

static char	*go_get_line(int lbrk, char *buff, int fd)
{
	int		i;
	int		j;
	char	*line;

	line = NULL;
	while (!lbrk && (buff[0] || read(fd, buff, BUFFER_SIZE)))
	{
		i = 0;
		j = 0;
		line = ft_strjoin_gnl(buff, line);
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
	int			lbrk;
	int			i;

	lbrk = 0;
	line = NULL;
	if ((read(fd, 0, 0) < 0) || BUFFER_SIZE < 1)
	{
		i = 0;
		while (buff[i])
		{
			buff[i] = 0;
			i++;
		}
		return (NULL);
	}
	line = go_get_line(lbrk, buff, fd);
	return (line);
}
