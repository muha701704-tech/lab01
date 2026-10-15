#include <stdio.h>
#include <string.h>

int main(void)
{
	char letter;
	scanf(" %c", &letter);

	printf("Code_Dec: %d\n", letter);
	printf("Code_Hex: %x\n", (unsigned int)letter);
	printf("Code_oct: %o\n", (unsigned int)letter);
	printf("Upper: %c\n", letter - ('a' - 'A'));
	printf("Next: %c\n", letter + 1);
	printf("Prev: %c\n", letter - 1);
    
	return 0;

}