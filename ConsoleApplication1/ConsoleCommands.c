#include "Header.h"


void ConsoleHanding(char command[])
{
	
	if (CompareStrings(command, "-person") ==0)
	{
		persons = realloc(persons, ++personCount * sizeof * persons);
		*persons[personCount - 1].firstName = "�� �������";
		*persons[personCount - 1].lastName = "�� �������";
		*persons[personCount - 1].middleName = "�� �������";
		persons[personCount - 1].age= 0;
		printf("������������ ������\n");
	}
	else if (CompareStrings(command, "--fn") == 0)
	{
		printf("������� ���\n");
		scanf("%s", persons[personCount-1].firstName);
	}
	else if (CompareStrings(command, "--ln") == 0)
	{
		printf("������� �������\n");
		scanf("%s", persons[personCount - 1].lastName);
	}
	else if (CompareStrings(command, "--mn") == 0)
	{
		printf("������� ��������\n");
		scanf("%s", persons[personCount - 1].middleName);
	}
	else if (CompareStrings(command, "--age") == 0)
	{
		short age;
		printf("������� �������\n");
		scanf("%hd", &persons[personCount - 1].age);
	}
	else
	{
		system("cls");
		printf("����� �������� �� ����������\n");
	}
	
}



