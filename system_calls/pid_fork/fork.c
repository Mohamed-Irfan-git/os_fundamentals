#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>


int main(){
    pid_t pid;
    pid = fork();

    if(pid < 0){
        printf("Fork failed\n");
    }

    else if(pid == 0){
        printf("I am the child\n");
        printf("this is child pid: %d\n",(int)pid);
    }
    else{
        wait(NULL);
        printf("I am the parent\n");
        printf("this is parent pid: %d\n",(int)pid);
    }

    
}