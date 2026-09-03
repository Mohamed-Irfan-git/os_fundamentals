#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(){
    char *args[] = {"ls","-l",NULL};

    printf("Before execv\n");
    execv("/bin/ls",args);
    printf("After execv\n");

    return 0;
}