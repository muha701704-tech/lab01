#include <stdio.h>

int main(void)
{
  int reactor_core = 12;

  printf("[");
  printf("%d", reactor_core);
  printf(", ");
  printf("%d", reactor_core * 2);
  printf(", ");
  printf("%d", reactor_core * reactor_core);
  printf("]");
  printf("\n");
  return 0;
}
