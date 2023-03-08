#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_combn(int n)
{
	int	l;
	int	sl;

	sl = n - 2;
	while (sl < 10)
	{
		l = n - 1;
		while (l < 10)
			{
			ft_putchar(l + '0');
			l++;
			if (n > 0)
				{
					n--;
					ft_put_combn(n);
				}
			}
		ft_putchar(',');
		ft_putchar(' ');
		ft_putchar(sl + '0');
		sl++;
	}

}
