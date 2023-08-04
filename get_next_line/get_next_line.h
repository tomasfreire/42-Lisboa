/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:30:22 by marvin            #+#    #+#             */
/*   Updated: 2023/08/04 15:26:17 by toantune         ###   ########.fr       */
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
#  define BUFFER_SIZE 10 
# endif

char    *get_next_line(int fd);
char    *ft_strjoin(char *buff, char *line);
int     check_line_break(const char *buff);
void    clean_buffer(char *buff, int index);
void	read_file(char *buff, int *buff_rd, int fd);
int     ft_strlen(char *str);
void	ft_memset(char *s, int c);

#endif
