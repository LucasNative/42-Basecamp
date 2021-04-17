#include <stdio.h>

int		main(void)
{
	int i;
	int j;
	int d;
	int m;

	i = 5;
	j = 2;

	ft_div_mod(i, j, &d, &m);
	printf("%d, %d\n ", d, m);

	return 0;
}
