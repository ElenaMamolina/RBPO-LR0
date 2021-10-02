#include "Header.h"

int CompareStrings(char* lhs, char* rhs)
{
	while (*lhs && *rhs)
	{
		if (*lhs == *rhs)
		{
			lhs++;
			rhs++;
			continue;
		}
		return ((*lhs < *rhs) ? -1 : 1);
	}
	if (!(*lhs) && !(*rhs))
	{
		return 0;
	}
	return ((*rhs) ? -1 : 1);

}
char* ConcatIntoOneWhole(char* s1, char* s2, char* s3)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len3 = strlen(s3);


	char* result = malloc(len1 + len2 + len3 + 1);

	if (!result)
	{
		fprintf(stderr, "Cбой: недостаточно памяти!\n");
		return NULL;
	}

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	memcpy(result + len1 + len2, s3, len3 + 2);


	return result;
}
