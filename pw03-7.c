#include <stdio.h> 
#include <string.h>
#define distro "LinuxDistro"

int main(void)
{
	const char rdate[] = "2026";

	printf("Distro: %s\n", distro);
	printf("Rdate: %s\n", rdate);
	printf("Strlen: %zu\n", strlen(distro));
	printf("Sizeof: %zu\n", sizeof(distro));

	return 0;
}