#ifndef TEST_GET_NEXT_LINE_H
# define TEST_GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

# ifndef BUFFER_SIZE	 
#  define BUFFER_SIZE 1024
# endif

# define SMALL_BUFFER 11
# define MEDIUM_BUFFER 1001
# define LARGE_BUFFER 100001

void    test_ft_strlen(int (f)(char *));
void    test_check_line_break(int (f)(char *));
void    test_clean_buffer(void (f)(char *, int));
void	test_strjoin(char *f(char *, int, char *));

#endif
