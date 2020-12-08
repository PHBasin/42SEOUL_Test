#include <unistd.h>
#include "ft_list.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(void)
{
	char	*str;
	t_list	*list;

	str = "Hello World!";
	list = ft_create_elem(str);
	ft_putstr(list->data);
	return (0);
}
