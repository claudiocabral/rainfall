#include <stdio.h>
// auth
// reset
// service + arg
// login
// 0x804a028 password address

void *auth = 0;
void *service = 0;

struct f_table {
    const char *name;
    void (*f)(const char *buffer);
};

void reset(const char *buffer, void **ptr, void **other_ptr) {
    free(auth)
}

void login(const char *buffer) {
    if(auth[0x20] == 0) {
        fwrite("Password:\n", sizeof("Password:\n"), 1, stdin);
        return ;
    }
    system("/bin/sh");
}

static struct f_table table[] = {
    {"auth ", auth},
    {"reset ", reset},
    {"service ", service},
    {"login ", login},
}


int main() {
    void *other_ptr = 0;
    char buffer[0x40];
    while (fgets(buffer, 0x40, stdin)) {
        printf("%p, %p \n", auth, service);
        fgets(buffer, 0x40, stdin);
        for (int i = 0; i < sizeof(table) / sizeof(*table); ++i) {
            if (strncmp(buffer, table[i].name, strlen(table[i].name)) == 0) {
                table[i].f(buffer);
                auth = malloc(sizeof(int));
            }
        }
    }
}
