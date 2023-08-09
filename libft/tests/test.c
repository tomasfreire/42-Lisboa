#include "../libft.h"

int	main(void)
{
	int a = 21;
	ft_printf("want: c | got: %c\n", 'c');
	ft_printf("want: This is a test | got: %s\n", "This is a test");
	ft_printf("want: -23 | got: %i\n", -23);
	ft_printf("want: 23  | got: %u\n", 23);
	ft_printf("want: 5b  | got: %x\n", 91);
	ft_printf("want: 5B  | got: %X\n", 91);
	ft_printf("%p\n", &a);
	ft_printf("42%%\n");

	int fd = open("./text.txt", O_RDONLY);

	for (int i = 0; i < 5; i++)
		ft_printf("\n%s\n", get_next_line(fd));
	close(fd);
	return (0);
}
