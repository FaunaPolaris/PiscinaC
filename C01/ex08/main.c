#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;
	int	size = 10;
	int	tab[10] = {9, 7, 6, 2, 3, 5, 8, 0, 4, 1};

	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}
