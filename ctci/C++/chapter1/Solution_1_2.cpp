
#include "stdafx.h"
#include "iostream"

using namespace std;

void reverse(char* str) {

	int length = strlen(str);

	if (length == 0 || length == 1){
		return;
	}
	
	for (int i = 0; i < length/2; i++)
	{
		int c = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = c;
	}
}

int main() {

	char str1[] = "apple";
	char str2[] = "peach";
	char str3[] = "A";
	reverse(str1);
	reverse(str2);
	reverse(str3);
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	system("pause");
	return 0;
}