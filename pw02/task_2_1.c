#include <stdio.h>

int main(void)
{
    int unit_id;
    unsigned int unit_version;
    unsigned int unit_status;
    long long sum;

    scanf("%d %x %o", &unit_id, &unit_version, &unit_status);

    sum = unit_id;
    sum = sum + unit_version + unit_status;

    printf("UNIT_ID: %d\n", unit_id);
    printf("UNIT_VERSION: %u\n", unit_version);
    printf("UNIT_STATUS: %u\n", unit_status);
    printf("SUM: %lld\n", sum);

    return 0;
}
