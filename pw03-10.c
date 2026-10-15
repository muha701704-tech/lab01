#include <stdio.h> 
#include <wchar.h> 
#include <locale.h>

int main(void) 
{
	setlocale(LC_ALL, "");

	wchar_t text1[30];
	wchar_t text2[30];
	wchar_t text3[30];

	wscanf(L"%29ls %29ls %29ls", text1, text2, text3);

	wprintf(L"%-15ls|%20ls|%.5ls\n", text1, text2, text3);

	return 0;
}