#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    pid_t pid;
    pid = fork();

    if(pid < 0){
        printf("Fork failed\n");
    }

    else if(pid == 0){
        printf("I am the child\n");
    }
    else{
        printf("I am the parent\n");
    }

    
}