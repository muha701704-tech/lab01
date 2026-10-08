#include <stdio.h>

int main(void)
{
    float value_float;
    double value_double;
    long double value_long;

    scanf("%Lf", &value_long);

    value_double = value_long;
    value_float = value_long;

    printf("FLOAT: %.6f\n", value_float);
    printf("DOUBLE: %.6f\n", value_double);
    printf("LDOUBLE: %.6Lf\n", value_long);

    value_float += 1;
    value_double += 1;
    value_long += 1;

    printf("FLOAT+1: %.6f\n", value_float);
    printf("DOUBLE+1: %.6f\n", value_double);
    printf("LDOUBLE+1: %.6Lf\n", value_long);

    return 0;
}
