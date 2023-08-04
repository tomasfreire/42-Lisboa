#include "./test_get_next_line.h"
#include "../get_next_line.h"

int     main(void)
{
    int fd = open("./text.txt", O_RDONLY);
    
    if (fd < 0)
        return (0);
    
    for (int i = 0; i < 5; i++)
    {   
        char *line = get_next_line(fd);

        printf("%2d : %s\n", i, line);
        free(line);
    }

    close(fd);
    return (0);
}
