// labor1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <malloc.h>
#include <locale.h>
#include <stdlib.h>


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");

	int N,M,count=0;

	printf("Введите количество столбцов: ");
	scanf("%d", &M);
	printf("Введите количество рядов: ");
	scanf("%d", &N);

	int **A = (int **)malloc(N*sizeof(int *));
	
	for(int i = 0; i < N; i++) {
		A[i] = (int *)malloc(M*sizeof(int));
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			A[i][j] = rand()%4;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < N/2; i++){
		for(int j = 0; j < M; j++){
			if(A[i][j] != 0) count++;
		}
	}

	printf("Количество ненулевых элементов в левой части массива: %d", count);

	getchar();
	getchar();
	return 0;
}

