#include <stdio.h>
#include <stdlib.h>

typedef void (*t_func)(void);

void n() {
    system("/bin/cat /home/user/level7.pass");
}

void m() {
    puts("Nope");
}

int main() {
    char *buffer = malloc(0x40);
    t_func *f = malloc(sizeof(t_func));
    *f = m;
    strcpy(argv[1], buffer);
    (*f)();
}
