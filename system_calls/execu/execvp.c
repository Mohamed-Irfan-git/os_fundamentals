#include <stdio.h>
#include <unistd.h>

int main(){
    char * args[] = {"ls","-l",(char*)NULL};
    execvp("ls",args);
    printf("Execution failed\n");

    return 0;
}