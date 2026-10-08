#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int ready_input;
    int fault_input;
    bool module_ready;
    bool fault_state;

    scanf("%d %d", &ready_input, &fault_input);

    module_ready = ready_input;
    fault_state = fault_input;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", module_ready + fault_state);

    return 0;
}
