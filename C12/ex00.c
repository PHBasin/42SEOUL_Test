#include <unistd.h>
#include "ft_list.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(void)
{
	t_list	*list;
	char	*str;

	str = "Hello World!\n";
	list = ft_create_elem(str);
	ft_putstr(list->data);
	return (0);
}
