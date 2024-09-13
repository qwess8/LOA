// Labor1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int num[10];
	int min, max;
	
	for(int i = 0; i<10; i++){
		num[i] = i;
		printf("%d\n", num[i]);
	}

	min = num[0];
	max= num[0];
	for(int i = 0; i < 10; i++){
		if(num[i]< min) min = num[i];
		if(num[i]> max) max = num[i];
	}

	printf("\nmax - min = %d", max-min);
	
	getchar();
	return 0;
}

