#include <stdio.h>

int	main(void)
{
	int *pt01;
	int **pt02;
	int ***pt03;
	int ****pt04;
	int *****pt05;
	int ******pt06;
	int *******pt07;
	int ********pt08;
	int *********pt09;

	int sum_int = 99;
	pt01 = &sum_int;
	pt02 = &pt01;
	pt03 = &pt02;
	pt04 = &pt03;
	pt05 = &pt04;
	pt06 = &pt05;
	pt07 = &pt06;
	pt08 = &pt07;
	pt09 = &pt08;

	printf("sum_int inicial: %d\n", sum_int);
	ft_ultimate_ft(pt09);
	printf("%d\n", *********pt09);
	printf("sum_int final: %d \n", sum_int);
}