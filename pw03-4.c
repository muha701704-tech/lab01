#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

	printf("%s", text);
	printf("strlen: %zu\n", strlen(text));
	printf("sizeof: %zu\n", sizeof(text));

	return 0;
}