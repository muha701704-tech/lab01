#include <stdio.h> 
#include <string.h> 
#include <wchar.h> 
#include <locale.h>

int main(void) 
{
	setlocale(LC_ALL, "");

	const char text[] = "Сбой матрицы";
	const wchar_t text2[] = L"Сбой матрицы";

	printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(text), strlen(text));
	printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(text2), wcslen(text2));

	return 0;
}