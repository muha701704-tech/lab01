#include <stdio.h>

#define DAYS 365
#define HOURS 24
#define SECONDS 3600

int main(void) {
    int age = 17;
    int days = age * DAYS;
    int hours = days * HOURS;
    int sec = hours * SECONDS;

    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n",
        sec, hours, days, age);

    return 0;
}
