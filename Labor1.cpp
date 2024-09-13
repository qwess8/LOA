// Labor1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int num[10][10];
	int sum = 0;
	srand(time(NULL));
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			num[i][j] = rand()%10;
			printf(" %d ", num[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			sum+=num[j][i];
		}
		printf("%d ", sum);
		sum = 0;
	}
	
	getchar();
	return 0;
}

