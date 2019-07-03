// p return address 0x0804853e
// system address 0xb7e6b060
// 0xbffff744 stack in system
// 0xbffff6ec
// heap: 0x804a008

void p() {
    char buffer[0x4c];
    fflush(stdout);
    gets(buffer);
    if (__builtin_return_address() & 0xb0000000) {
        printf("(%p)\n", $eip);
        exit(1);
    }
    puts(buffer);
    strdup(buffer);
}

int main() {
    p();
}
