#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>

int main() {
    fork();
    fork();
    printf("hi my name is irfan\n");
    // fork();

    return 0;
}