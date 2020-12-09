/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 08:51:02 by phbasin           #+#    #+#             */
/*   Updated: 2020/12/09 09:14:25 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list	*list;
	char	*str;

	str = "World!\n";
	list = ft_create_elem(str);
	ft_list_push_front(&list, "Hello ");
	print_list(list);
	return (0);
}
