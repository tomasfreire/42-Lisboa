#include <stdio.h>

#define BUFFER_SIZE 20

void	clean_buffer(char *buff, int index)
{
	int	i = 0;
	int	j = index;
	while (j < BUFFER_SIZE && buff[i] && buff[j])	
		buff[i++] = buff[j++];
	while (i < BUFFER_SIZE)
		buff[i++] = 0;
}

int	main(void)
{
	char	buff[2] = "\0\0";

	if (buff[0] == '\0')
		buff[0] = NULL;
	
	/* clean_buffer(buff, 5); */
	printf("%s\n", buff);
	return (0);
}
