#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[20];
	int width;

	scanf("%19s %d", text, &width);
	printf("%*s\n", width, text);
	printf("%-*s\n", width + 5, text);

	return 0;

}