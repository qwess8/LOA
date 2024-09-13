// Labor1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int *num, n;
	int min, max;
	srand(time(NULL));
	scanf("%d", &n);
	num =(int*)malloc(n * sizeof(int));
	for(int i = 0; i<n; i++){
		num[i] = rand()%10;
		printf("%d\n", num[i]);
	}

	min = num[0];
	max= num[0];
	for(int i = 0; i < n; i++){
		if(num[i]< min) min = num[i];
		if(num[i]> max) max = num[i];
	}

	printf("\nmax - min = %d", max-min);
	free(num);
	

	getchar();
	getchar();
	return 0;
}

