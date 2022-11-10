// C++ program to illustrate toupper() method
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
	int j = 0;
	char str[] = "geekforgeeks";
	char ch;

	while (str[j]) {
		ch = str[j];
		putchar(toupper(ch));
		j++;
	}

	return 0;
}

