void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = temp;
		i++;
		if (i >= size -1 -i)
		{
			break ;
		}
	}
}	
