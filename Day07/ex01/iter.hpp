template <typename T, typename R>
void	iter(T	*tab, int	size, R	(*f)(T&))
{
	if (size < 0 || tab == 0)
		return ;

	for (int i = 0; i < size; i++)
	{
		f(tab[i]);
	}		
}
