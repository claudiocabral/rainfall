void o() {
    system("/bin/sh");
}

void n() {
    char buf[0x200];
    fgets(buf, 0x200, stdin);
    printf(buf);
    exit(1);
}

int main() {
    n();
    return 0;
}
