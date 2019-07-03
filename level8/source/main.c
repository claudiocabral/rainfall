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
    void (*f)(const char *buffer)
};

static struct f_table table = {
    {"auth ", auth},
    {"reset", reset},
    {"service", service},
    {"login", login},
}

void reset(const char *buffer, void **ptr, void **other_ptr) {
    if (*ptr)
        free(*ptr);
}

int main() {
    void *other_ptr = 0;
    char buffer[0x40];
    while (fgets(buffer, 0x40, stdin)) {
        printf("%p, %p \n", auth, service);
        fgets(buffer, 0x40, stdin);
        if (strncmp(buffer, "auth ", sizeof("auth ")) == 0) {
            auth = malloc(sizeof(int));
        }
    }
}
