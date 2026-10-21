#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(){
    pid_t pid = fork();

    if(pid == 0)
        printf("This is child process\n");
    else if (pid > 0)
        printf("this is parent\n");
    else
        printf("something went wrong\n");
}