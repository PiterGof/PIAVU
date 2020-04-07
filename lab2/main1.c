/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define SIZE 7

int main(void)
{
	int a[SIZE] = { 5, 2, 25, 4, 10, 2, 2 };
	int b[SIZE];
	int sum = 0, min = a[0], q = 0, index_min, index_min2, n;



	for (int i = 0; i < SIZE;i++)
	{
		if (a[i] <= min)
		{
			min = a[i];
			index_min = i;
		}
		sum += a[i];
	}
	min = a[0];
	for (int i = 0; i < SIZE;i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			index_min2 = i;
		}
	}
	sum /= SIZE;

	a[index_min] = sum;
	a[index_min2] = sum;

	for (int i = 0; i < SIZE;i++)
	{
		printf("%i ", a[i]);
	}
	return 0;

}

*/