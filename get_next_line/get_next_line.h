/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:30:22 by marvin            #+#    #+#             */
/*   Updated: 2023/07/31 16:02:39 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024 
# endif

char    *get_next_line(int fd);
char    *ft_strjoin(char *buff, int index, char *line);
int     check_line_break(char *buff);
void    clean_buffer(char *buff, int index);
void	read_file(char *buff, int *buff_rd, int fd);
int     ft_strlen(char *str);

#endif
