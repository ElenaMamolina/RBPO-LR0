#include "Header.h"



void main()
{
	int numberUsers = 1;
    setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	persons = malloc(2 * sizeof(int));
	system("cls");
	printf("Введите количество пользователей которое собираетесь добавить\n");
	scanf("%d", &numberUsers);
	system("cls");
	printf("Введите комманду!\n");

	char command[8];
	while (personCount< numberUsers+1)
	{
	  scanf("%s", command); 
	  ConsoleHanding(command);
	}
	DrawTheTableInTheConsole();

    printf("Выберите тип сортировки (по возрастанию ввести(-1); по убыванию ввести (1))\n");
	enum SortType sort;
	scanf("%d", &sort);
    Sort(persons, 0 , personCount - 1, sort);
	DrawTheTableInTheConsole();
	free(persons);
}






