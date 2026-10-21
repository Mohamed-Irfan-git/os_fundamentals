#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdlib.h>

int main(){
    pid_t pid = fork();

    if(pid == 0){
        printf("this is child\n");
        exit(1);
    }
    else if(pid > 0){
        // wait(NULL);
        waitpid(pid,NULL,0);
        sleep(2);
        printf("this is parent\n");
    }
    else
        perror("fork");
        return 1;


    return 0;
}