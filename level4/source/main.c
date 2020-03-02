// cmp *0x8049810 == 0x1025544
//

void p(char *str) {
    printf(str)
}


void n() {
    char buf[0x200];
    fgets(buf, 0x200, stdin);
    p(buf);
    if (m == 0x1025544) {
        system("/bin/cat /home/user/level5/.pass");
    }
}

int main() {
    n();
}
