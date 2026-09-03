#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    pid_t pid;
    pid = fork();

    if(pid == 0){
        printf("Child running\n");
        sleep(3);
        printf("Child finished\n");
    }
    else{
        printf("Parent waiting for child %d\n",pid);
        waitpid(pid,NULL,0);
        printf("Parent resumed\n");
    }


    return 0;
}
