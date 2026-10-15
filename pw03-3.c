#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[30];

	scanf("%29s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", (int)strlen(name) + 5, name);

	return 0;
}