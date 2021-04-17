#include <stdio.h>

int main(void)
{
	int j;
	int k;
	
	j = 5;
	k = 2;

	printf("Antes da função: %d, %d\n", j, k);
	ft_ultimate_div_mod(&j, &k);
	printf("Depois da função: %d, %d\n", j, k);
}