#include <stdio.h>
// auth
// reset
// service + arg
// login
// 0x804a028 password address

int *auth = 0;
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

void f_auth(const char *buffer) {
    auth = malloc(4);
    *auth = 0;
    if (strlen(buffer + 5) > 0x1e) return;
    strcpy(auth, buffer + 5);
}

void f_service(const char *buffer) {
    service = strdup(buffer + 7);
}

static struct f_table table[] = {
    {"auth ", f_auth},
    {"reset", reset},
    {"service", f_service},
    {"login", login},
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
