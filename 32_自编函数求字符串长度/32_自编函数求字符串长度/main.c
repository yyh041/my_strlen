#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "lenstr.h"

int main()
{
	char arr[] = "lsy";
	int len = lenstr(arr);
	printf("%d",len);
	return 0;
}