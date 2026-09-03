#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
    pid_t pid;
    int fd[2];
    pipe(fd);

    pid = fork();

    if(pid == 0){
        //child
        close(fd[1]);

        char buffer[20];
        read(fd[0],buffer,5);

        buffer[5] = '\0';
        printf("child recieved: %s\n",buffer);
        close(fd[0]);
    }

    else{
        //parent
        close(fd[0]);
        write(fd[1],"Hello",5);
        close(fd[1]);
        wait(NULL);
        
    }
}