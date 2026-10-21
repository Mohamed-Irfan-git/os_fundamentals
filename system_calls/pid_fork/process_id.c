#include <stdio.h>
#include <unistd.h>

int main(){
    printf("this is pid : %d\n",(int)getpid());
    printf("this is ppid %d\n",(int)getppid());
}