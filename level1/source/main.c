#include <stdio.h>

void run() {
    fwrite("Good... wait what?\n", 1, 0x13, stdout);
    system("/bin/sh");
}


int main(int argc, char **argv) {
    char buffer[0x48];
    gets(buffer);
    return 0;
}
