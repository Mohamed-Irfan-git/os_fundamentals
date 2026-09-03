#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>

//this create inside programe if will create another proram
//that new created child replace that child process
// after it will return to the parent

int main(){
    pid_t pid = fork();

    if(pid == 0){
        execl("/bin/pwd","pwd",NULL);
        // in here we can use execlp("pwd","pwd",NULL)
        // no ned to provide full path
    }
    else{
        wait(NULL);
        printf("Child complete\n");
    }
}