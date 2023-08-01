#include "./test_get_next_line.h"
#include "../get_next_line.h"

#define STR1 "abcdefghijklmnopqrstuwxyz"
#define STR2 "aaaaa"
#define STR3 "aaa\naa"
#define STR4 "aaa\0aa"
#define STR5 ""
#define STR6 "\0"
#define STR7 " "
#define STR8 NULL

void     test_ft_strlen(int (f)(char *))
{
    printf("\nTEST : ft_strlen()\n");
    printf("want : %2ld | got : %2d\n", strlen(STR1), f(STR1));
    printf("want : %2ld | got : %2d\n", strlen(STR2), f(STR2));
    printf("want : %2ld | got : %2d\n", strlen(STR3), f(STR3));
    printf("want : %2ld | got : %2d\n", strlen(STR4), f(STR4));
    printf("want : %2ld | got : %2d\n", strlen(STR5), f(STR5));
    printf("want : %2ld | got : %2d\n", strlen(STR6), f(STR6));
    printf("want : %2ld | got : %2d\n", strlen(STR7), f(STR7));
    //printf("want : %2ld | got : %2d\n", strlen(STR8), f(STR8));
}

void     test_check_line_break(int (f)(char *))
{
    printf("\nTEST : ft_check_line_break()\n");
    printf("want : %2d | got : %2d\n", 0, f(STR1));
    printf("want : %2d | got : %2d\n", 0, f(STR2));
    printf("want : %2d | got : %2d\n", 4, f(STR3));
    printf("want : %2d | got : %2d\n", 0, f(STR4));
    printf("want : %2d | got : %2d\n", 0, f(STR5));
    printf("want : %2d | got : %2d\n", 0, f(STR6));
    printf("want : %2d | got : %2d\n", 0, f(STR7));
    printf("want : %2d | got : %2d\n", 0, f(STR8));
}

void    test_clean_buffer(void (f)(char*, int))
{
	char	buff_00[BUFFER_SIZE] = "\0\0\0\0\0\0\0\0\0\0\0";
	char	buff_00[BUFFER_SIZE] = "\0\0\0\0\0\0\0\0\0\0\0";
    

    printf("\nprint 1 : %s\n", buff_00);

    f(buff_00, 5);

    printf("\nprint 2 : %s\n", buff_00);
    
    //test_clean_buffer[1][0] = "\0\0\0\0\0\0\0\0\0\0";
    //test_clean_buffer[1][1] = NULL;
    //printf("\nTEST : clean_buffer() | index > buffer\n");
    //printf("\nTEST : clean_buffer() | index = buffer\n");
    //printf("\nTEST : clean_buffer() | index < buffer\n");

}

void	test_strjoin(char *f(char *, int, char *))
{
	printf("want : %s | got : %s\n", "aaaaabbbbb", f("bbbbb", 5, "aaaaa"));
	printf("want : %s | got : %s\n", "(null)", f(NULL, 5, "aaaaa"));
	printf("want : %s | got : %s\n", "aaaaa", f("aaaaa", 5, NULL));
}
