
#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

bool isUnique(const char* str)
{
	int test[8];
	int len = strlen(str);
	for (int i = 0; i<len ; i++)
	{
		int group = str[i] / 32;
		if ((test[group] & (1 << str[i])) > 0) {
			return false;
		}
		test[group] |= (1 << str[i]);
	}
	return true;
}
int main()
{
	const char* s = "apple";
	printf("isUnique(%s): %d\n", s, isUnique(s));
	system("pause");
}

