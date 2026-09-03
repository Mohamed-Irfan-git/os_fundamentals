## Diff of fork() vs exec()

### fork()
    create a new process
    both parent and child are running the same program

### exec()
    Replace the current program with another program


## execl() vs execlp()
    one for this we have to provide the path
        execl("/bin/pwd", "pwd", NULL);
    one for this we dont have to provide the path
        execlp("pwd", "pwd", NULL);

### execl() → arguments individually
### execv() → arguments in an array

above both cases we have to provide path

but when we use this 
## execvp() -> vector/array + searches PATH

