#include <stdio.h>

// payload 0x804988c
// should equal 0x40

void v() {
    char buffer[0x208];
    fgets(buffer, 0x200, stdin);
    printf(buffer);
}

int main() {
}
