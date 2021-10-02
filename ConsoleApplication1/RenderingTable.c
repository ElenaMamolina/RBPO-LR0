#include "Header.h"


void DrawTheTableInTheConsole() 
{
	for (int i = 0; i < personCount - 1; i++)
	{
		printf("%s""%s""%s""%s""%s""%s""%d",persons[i].lastName,"    ", persons[i].firstName, "    ", persons[i].middleName, "    ", persons[i].age);
		printf("\n");
	}
}
