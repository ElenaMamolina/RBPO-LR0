#include "Header.h"

void Sort(struct Person* persons, int left, int right, enum SortType sortType)
{
	int i = left;
	int j = right;
	struct Person temporarily;
	int intermediate = 0;

	while (i != j)
	{
		const char* firstString = ConcatIntoOneWhole(persons[i].firstName, persons[i].lastName, persons[i].middleName );
		const char* secondString = ConcatIntoOneWhole(persons[j].firstName, persons[j].lastName, persons[j].middleName );
		
		int comparison = CompareStrings(firstString, secondString);
		
		if (comparison == 0) 
		{
			if (persons[i].age > persons[j].age) 
			{
				comparison = -1;
			}
			if (persons[i].age < persons[j].age)
			{
				comparison = 1;
			}
		}


		if ((comparison == sortType) != (i < j))
		{

		    temporarily = persons[i];
		    persons[i] = persons[j];
		    persons[j] = temporarily;
 
			intermediate = i;
			i = j;

			if (intermediate < j)
			{
				j = intermediate + 1;
			}
			else
			{
				j = intermediate - 1;
			}
		}
		else
		{
			if (i < j)
			{
				j--;
			}
			else
			{
				j++;
			}
		}

		if (left < i - 1) 
		{
			Sort(persons,left, i - 1, sortType);
		}
		if (i + 1 < right) 
		{
			Sort(persons,i + 1, right, sortType);
		}


	}

}


