/*
#include <stdio.h>
#define size 2

int main()
{
	int i, j, n;

	n = 2 * size;
	int A[size * 2][size * 2] = {
		{1, 2, 12, 23},
		{3, 4, 83, 120},
		{5, 6, 11, 10},
		{7, 8, 18, 17}
	};
	int A1[size][size];
	int A2[size][size];
	int A3[size][size];
	int A4[size][size];

	for (i = 0;i < n;i++) {
		printf("\n\n");
		for (j = 0;j < n;j++) {
			printf("%i   ", A[i][j]);
		}
	}



	for (i = 0;i < n;i++) {
		printf("\n\n");
		for (j = 0;j < n;j++) {

			if (i < size && j < size)
			{
				A1[i][j] = A[i][j];
			}

			else if (i < size && j >= size)
			{
				A2[i][j - size] = A[i][j];
			}


			else if (i >= size && j < size)
			{
				A3[i - size][j] = A[i][j];
			}


			else if (i >= size && j >= size)
			{
				A4[i - size][j - size] = A[i][j];
			}


		}
	}

	for (i = 0;i < n;i++) {
		printf("\n\n");
		for (j = 0;j < n;j++) {

			if (i < size && j < size)
			{
				A[i][j] = A4[i][j];
			}

			else if (i < size && j >= size)
			{
				A[i][j] = A3[i][j - size];
			}

			else if (i >= size && j < size)
			{
				A[i][j] = A2[i - size][j];
			}

			else if (i >= size && j >= size)
			{
				A[i][j] = A1[i - size][j - size];
			}

			printf("%i   ", A[i][j]);
		}
	}

	return 0;

}*/