#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(){
    char *args[] = {"ls","-l",(char *)NULL};

    printf("Before execv\n");
    fflush(stdout);
    
    execv("/bin/ls",args);
    printf("After execv\n");

    return 0;
}