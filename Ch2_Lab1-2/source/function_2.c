#include <stdio.h>
#include <stdlib.h>

int Han_Xin_2()
{
	char sign = 'x';
	char sign2 = '-';
	int i, j;

	printf("(2)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (i == 1) || (i == 2) || (i == 7) || (i == 8) || (j == 0) || (j == 9) || (j == 1) || (j == 2) || (j == 7) || (j == 8))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}