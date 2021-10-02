#include "Header.h"


void ConsoleHanding(char command[])
{
	
	if (CompareStrings(command, "-person") ==0)
	{
		persons = realloc(persons, ++personCount * sizeof * persons);
		*persons[personCount - 1].firstName = "Не заданно";
		*persons[personCount - 1].lastName = "Не заданно";
		*persons[personCount - 1].middleName = "Не заданно";
		persons[personCount - 1].age= 0;
		printf("Пользаватель создан\n");
	}
	else if (CompareStrings(command, "--fn") == 0)
	{
		printf("Введите Имя\n");
		scanf("%s", persons[personCount-1].firstName);
	}
	else if (CompareStrings(command, "--ln") == 0)
	{
		printf("Введите Фамилию\n");
		scanf("%s", persons[personCount - 1].lastName);
	}
	else if (CompareStrings(command, "--mn") == 0)
	{
		printf("Введите Отчество\n");
		scanf("%s", persons[personCount - 1].middleName);
	}
	else if (CompareStrings(command, "--age") == 0)
	{
		short age;
		printf("Введите Возраст\n");
		scanf("%hd", &persons[personCount - 1].age);
	}
	else
	{
		system("cls");
		printf("Такой комманды не существует\n");
	}
	
}



