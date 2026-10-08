#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int input;
    uint8_t value;
    uint8_t add;
    uint8_t mul2;
    uint8_t sqr;

    scanf("%d", &input);

    value = input;
    add = value + 10;
    mul2 = value * 2;
    sqr = (unsigned int)value * value;

    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);

    return 0;
}
