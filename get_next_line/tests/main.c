#include "./test_get_next_line.h"
#include "../get_next_line.h"

int     main(void)
{
    //test_ft_strlen(ft_strlen);
    //test_check_line_break(check_line_break);
    /* test_clean_buffer(clean_buffer); */
    //test_strjoin(ft_strjoin);
    int fd = open("./text.txt", O_RDONLY);
    
    if (fd < 0)
        return (0);
    
    for (int i = 0; i < 5; i++)
    {   
        char *line = get_next_line(fd);

        printf("out %2d : %s\n", i, line);
        free(line);
    }

    close(fd);
    return (0);
}
