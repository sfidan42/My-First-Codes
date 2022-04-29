double	ft_abs(double nbr)
{


double	ft_sqrt(double nbr)
{
	double	error;
	double	ans;

	error = 1;
	while (error > 0.001)
	{
		ans = (ans + nbr / ans) / 2;
	error = 
