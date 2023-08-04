/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:29:49 by toantune          #+#    #+#             */
/*   Updated: 2023/08/04 17:03:41 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

int	check_line_break(const char *buff)
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

char	*ft_strjoin(char *buff, char *line)
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
