#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[20] = "SibSUTIS";

	printf("Sizeof: %zu\n", sizeof(text));
	printf("Strlen: %zu\n", strlen(text));
	printf("Free_Bytes: %zu\n", sizeof(text) - strlen(text) - 1);

	char text2[20] = "СибГУТИ";

    printf("Sizeof: %zu\n", sizeof(text2));
	printf("Strlen: %zu\n", strlen(text2));
	printf("Free_Bytes: %zu\n", sizeof(text2) - strlen(text2) - 1);
    
	return 0;
}