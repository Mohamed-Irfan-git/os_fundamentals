#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    printf("Before exec\n");

    // path.arg1,arg2,arg3 finally (char *NULL) mean this is the end
    execl("/bin/pwd", "pwd",(char *)NULL);
    printf("After exec\n");\

    //if uppder one is run this one is never run becouse this entire program will have replace by this program
    perror("execute failed\n");

    return 1;
}