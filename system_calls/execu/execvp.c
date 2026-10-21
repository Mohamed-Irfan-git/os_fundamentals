#include <stdio.h>
#include <unistd.h>

int main(){
    char * args[] = {"ls","-l",NULL};
    execvp("ls",args);
    printf("Execution failed\n");

    return 0;
}