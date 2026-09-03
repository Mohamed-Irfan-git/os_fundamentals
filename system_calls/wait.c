#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>


// this is case parent wait until child process is over
int main(){
    pid_t pid = fork();

    if(pid == 0){
        printf("Child is running\n");
        sleep(3);
        printf("Child is finished\n");
    }
    else{
        wait(NULL);
        printf("Parent continues\n");
    }

    return 0;
}
