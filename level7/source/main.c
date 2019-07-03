#include <stdio.h>
// fputs: 0x8049928
// argv2 0x080485f0

static char buffer[0x44];

void m() {
    time_t tloc;
    time(&tloc);
    printf("%s - %d\n", buffer, time);
}

struct data {
    int id;
    void *buffer;
}

int main() {
    data *ptr = malloc(sizeof(data));
    ptr->id = 1;
    ptr->self = malloc(sizeof(data));
    t_data *other_ptr = malloc(sizeof(data));
    other_ptr->id = 2;
    other_ptr->self = malloc(sizeof(void *));
    strcpy(ptr->buffer, argv[1]);
    strcpy(other_ptr->buffer, argv[2]);
    FILE *file = fopen("/home/user/level8/.pass", "r");
    fgets(buffer, sizeof(buffer), file);
    return 0;
}
