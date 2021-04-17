#include <stdio.h>

int main(void)
{
	
	int i;
	int j;

	i = 3; 
	j = 1;
	
	printf("valor de *a eh: %d, e o valoe de *b eh: %d\n", i, j);
	ft_swap(&i, &j);
	printf("agora o valor de *a eh: %d, e o valor de *b eh: %d\n", i, j);
}
