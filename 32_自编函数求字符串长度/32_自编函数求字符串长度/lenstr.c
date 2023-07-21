#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int lenstr(char* arr)
{
	int count = 0;
	if (*arr != '\0')
	{
		//count = lenstr(arr + 1)+1;
		return lenstr(arr + 1) + 1;
	}
	else
	{
		return 0;
	}
	//return count;
}