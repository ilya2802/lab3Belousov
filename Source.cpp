#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main()
{
	int ar[5][5];
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &ar[i][j]);
		}
	}
	for (k = 1; k <= 5; k++)
	{
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (ar[i][j] < ar[i + 1][j])
				{
					int x;
					x = ar[i][j];
					ar[i][j] = ar[i + 1][j];
					ar[i + 1][j] = x;
				}
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", ar[i][j]);
		}
		printf("\n");

	}
	int arr[5];
	for (int c = 0, i = 0; i < 5; i++)
	{
		for (c = ar[i][1], j = 0; j < 5; j++)
		{
			if (c < ar[i][j])
			{
				c = ar[i][j];
			}
		}
		arr[i] = c;
		printf("max%d=%d\n ", i + 1, c);
		c = 0;
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("Summ of max elements is: %d\n", sum);
	system("pause");
}

