// labor1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

	char imya[20], familiya[20];

	for(int i=0; i<3; i++){
		printf("Введите фамилию студента\n"); scanf("%20s", stud[i].famil);
	}

	for(int i=0; i<3; i++){
		printf("Введите имя студента\n"); scanf("%20s", stud[i].name);
	}

	for(int i=0; i<3; i++){
		printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
	}

	for(int i=0; i<3; i++){
		printf("Введите номер зачетной книжки студента %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
	}

	for(int i=0; i<3; i++){
		printf("Студент %s %s обучается на факультете %s, номер зачетной книжки %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}

	printf("Введите имя нужного студента: ");scanf("%20s", imya);
	printf("Введите фамилию нужного студента: ");scanf("%20s", familiya);

	for(int i=0; i<3; i++){
		if(strcmp(stud[i].name, imya)==0 && strcmp(stud[i].famil, familiya)==0){
			printf("Студент %s %s обучается на факультете %s, номер зачетной книжки %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		}
	}
	
	getchar();
	getchar();
	return 0;
}

