#include <stdio.h>
#include <stdint.h>

int main(void)
{
    unsigned int id_input;
    unsigned int status_input;
    int packet_id;
    uint8_t status_code;
    float voltage;
    uint16_t checksum;

    scanf("%x %o %f", &id_input, &status_input, &voltage);

    packet_id = id_input;
    status_code = status_input;
    checksum = id_input + status_code;

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", (unsigned int)status_code);
    printf("STATUS_CHAR: %c\n", status_code);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", (unsigned int)checksum);

    return 0;
}
