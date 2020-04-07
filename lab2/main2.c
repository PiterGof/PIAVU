/*
#include <stdio.h>
#define size 30
int main(void)
{
	int a[size] = {1, 1, 1, 5, 6, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 10, 100, 100 ,100 , 100, 1, 1, 1, 1, 1, 1};
	int b[size];
	int n = 0, first = a[0], max, k = 0;

	for (int i = 0; i < size; i++)
	{
		if (first == a[i])
		{
			n++;
		}
		else if (first != a[i])
		{
			first = a[i];
			b[k++] = n;
			n = 1;
		}
	}

	max = b[0];
	for (int i = 0; i < size; i++)
	{
		if (max < b[i])
		{
			max = b[i];
		}
	}

	printf("max = %i", max);

	return 0;
}*/