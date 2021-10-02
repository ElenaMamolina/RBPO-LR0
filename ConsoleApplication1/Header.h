#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
struct Person* persons;
int personCount;
int CompareStrings(const char* lhs, const char* rhs);
char* ConcatIntoOneWhole(char* s1, char* s2, char* s3);
void ConsoleHanding(char command[]);
void DrawTheTableInTheConsole();
enum SortType{ Asc = -1, Desc = 1};
struct Person
{
	char firstName[20];
	char lastName[20];
	char middleName[20];
	short age;
};
