#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>

int main() {

    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed\n");
    }
    else if (pid == 0) {

        // Child
        char *args[] = {"ls", "-l", NULL};
        execvp("ls", args);

        printf("Exec failed\n");
    }
    else {

        // Parent
        wait(NULL);
        printf("Child finished\n");
    }

    return 0;
}