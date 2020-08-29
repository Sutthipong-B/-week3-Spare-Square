#include<stdio.h>
int main()
{
	int w, h, n;
	scanf_s("%d", &n);
	for (h = 1; h <= n ; h++)
	{
		if (h == 1 || h==n)
		{
			for (w = 1; w <= n; w++)
			{
				printf("*");
			}
		}
		else if (h > 1 && h < n)
		{
			for (w = 1; w <= n; w++)
			{
				if (w == 1 || w == n)
				{
					printf("*");
				}
				else if (w > 1 && w < n)
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}