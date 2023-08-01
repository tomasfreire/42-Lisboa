/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:29:49 by toantune          #+#    #+#             */
/*   Updated: 2023/07/31 18:39:18 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_line_break(char *buff)
{
	int	i;

	if (buff == NULL)
		return (0);
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
			return (i + 1);
		i++;
}
	return (0);
}
char	*ft_strjoin(char *buff, int index, char *line)
{
	char	*new_line;
	int	i;
	int	j;

	new_line = NULL;
	if (buff == NULL || index <= 0)
		return (NULL);
	new_line = (char *)malloc(sizeof(char) * (index + ft_strlen(line) + 1));
	if (!new_line)
		return (NULL);
	i = 0;
	while (i < ft_strlen(line))
	{
		new_line[i] = line[i];
		i++;
	}
	j = 0;
	while (j < index)
		new_line[i++] = buff[j++];
	new_line[i] = '\0';
	free(line);
	return (new_line);
}

void	clean_buffer(char *buff, int index)
{
	int	i;
	int	j;

	i = 0;
	j = index;
	if (index > BUFFER_SIZE)
		return;
	while (j < BUFFER_SIZE && buff[i] && buff[j]) 
		buff[i++] = buff[j++];
	while (i < BUFFER_SIZE)
		buff[i++] = 0;
	if (buff[0] == 0)
	{
		free(buff);
		buff = NULL;
		return;
	}
}

void	read_file(char *buff, int *buff_rd, int fd)
{
		buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buff)
			return ;
		*buff_rd = read(fd, buff, BUFFER_SIZE);
		buff[*buff_rd] = '\0';
}

