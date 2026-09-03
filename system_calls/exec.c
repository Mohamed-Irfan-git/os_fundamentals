#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    printf("Before exec\n");
    execl("/bin/pwd", "pwd",NULL);
    printf("After exec\n");

    return 0;
}