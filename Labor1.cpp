// labor1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		printf("������� ������� ��������\n"); scanf("%20s", stud[i].famil);
	}

	for(int i=0; i<3; i++){
		printf("������� ��� ��������\n"); scanf("%20s", stud[i].name);
	}

	for(int i=0; i<3; i++){
		printf("������� �������� ���������� �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
	}

	for(int i=0; i<3; i++){
		printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
	}

	for(int i=0; i<3; i++){
		printf("������� %s %s ��������� �� ���������� %s, ����� �������� ������ %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}

	printf("������� ��� ������� ��������: ");scanf("%20s", imya);
	printf("������� ������� ������� ��������: ");scanf("%20s", familiya);

	for(int i=0; i<3; i++){
		if(strcmp(stud[i].name, imya)==0 && strcmp(stud[i].famil, familiya)==0){
			printf("������� %s %s ��������� �� ���������� %s, ����� �������� ������ %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		}
	}
	
	getchar();
	getchar();
	return 0;
}

