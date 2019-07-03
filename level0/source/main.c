#define _GNU_SOURCE

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>



int main(int argc, char **argv) {
     if (atoi(argv[1]) != 423) {
         fwrite("No !\n", 1, 5, stdout);
         return 0;
     }
     char *bin[2];
     bin[0] = strdup("/bin/sh");
     bin[1] = 0;
     gid_t gid = getegid();
     uid_t uid = geteuid();
     setresgid(gid, gid, gid);
     setresuid(uid, uid, uid);
     execv(bin[1], bin);
     return 0;
}
