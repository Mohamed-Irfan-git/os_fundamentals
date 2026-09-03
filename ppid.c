#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    pid_t pid = fork();

    if(pid == 0){
        printf("Child\n");
        printf("My PID: %d\n",getpid());
        printf("My Parent PID: %d\n",getppid());
    }
    else{
        printf("Parent\n");
        printf("My PID: %d\n",getpid());
    }
   
    return 0;
}
