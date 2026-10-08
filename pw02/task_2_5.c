#include <stdio.h>
#include <stdint.h>

int main(void)
{
    long long min;
    long long max;
    long long values;

    min = INT8_MIN;
    max = INT8_MAX;
    values = max - min + 1;
    printf("INT8: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(int8_t), min, max, values);

    min = 0;
    max = UINT8_MAX;
    values = max - min + 1;
    printf("UINT8: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(uint8_t), min, max, values);

    min = INT16_MIN;
    max = INT16_MAX;
    values = max - min + 1;
    printf("INT16: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(int16_t), min, max, values);

    min = 0;
    max = UINT16_MAX;
    values = max - min + 1;
    printf("UINT16: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(uint16_t), min, max, values);

    min = INT32_MIN;
    max = INT32_MAX;
    values = max - min + 1;
    printf("INT32: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(int32_t), min, max, values);

    min = 0;
    max = UINT32_MAX;
    values = max - min + 1;
    printf("UINT32: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(uint32_t), min, max, values);

    return 0;
}
