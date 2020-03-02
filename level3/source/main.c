#include <stdio.h>

int m = 0;

void v() {
    char buffer[0x208];
    fgets(buffer, 0x200, stdin);
    printf(buffer);
    if (m == 0x40) {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");
    }
}

int main() {
    v();
    return 0;
}
