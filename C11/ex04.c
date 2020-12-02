#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_compare(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int sorted1[] = {10, 30, 56, 1235, 6546, 10345};
	int sorted2[] = {7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1};
	int sorted3[] = {0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 8, 10, 11};
	int sorted4[] = {-11, -10, -8, -5, -4, -3, -2, -1, 0, 0};
	int not_sorted1[] = {10, 30, 56, 3, 10345, 1235, 6546};
	int not_sorted2[] = {6546, 1235, 10345, 3, 56, 30, 10};
	int not_sorted3[] = {10, 30, 56, 85, 145, 235, 46};
	int not_sorted4[] = {10, 5, 16, 58, 105, 235, 546};
	int not_sorted5[] = {9, 10, 9, 58, 105, 235, 546};
	printf("%d\n", ft_is_sort(sorted1, 6, &ft_compare));
	printf("%d\n", ft_is_sort(sorted2, 26, &ft_compare));
	printf("%d\n", ft_is_sort(sorted3, 13, &ft_compare));
	printf("%d\n", ft_is_sort(sorted4, 10, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted1, 7, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted2, 7, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted3, 7, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted4, 7, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted5, 7, &ft_compare));
	return (0);
}
