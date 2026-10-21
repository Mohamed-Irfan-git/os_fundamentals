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

## pipe()
    A pipe allows one process to send data to another process.
    int pipe(int pipefd[2]);

    write(fd[1], data, number_of_bytes);
    we dont knoweread(fd[0], buffer, number_of_bytes);

### file modes
    O_RDONLY  → Read only

    O_WRONLY  → Write only

    O_RDWR    → Read + Write

    O_CREAT   → Create if missing

    O_TRUNC   → Erase existing contents

    O_APPEND  → Write at end




# LEarning roadmap of this system call
1. Process IDs and process creation

getpid(), getppid(), fork()

Understand how Linux creates processes and how return values work.



2. Parent-child process relationships

Process trees, execution order, multiple children

Practise tracing which process executes each statement.



3. Process synchronization

wait(), waitpid()

Learn how a parent waits for a child and collects its termination status.



4. Zombie and orphan processes

Process termination, reparenting, process states

Create both cases in C, observe them in Ubuntu, and learn how to prevent or handle them.



5. Program execution

exec() family

Understand how a process runs a different program.



6. File operations

open(), read(), write(), close()



7. Inter-process communication

pipe(), shared memory



8. Final practical and exam revision

Code writing, output prediction, debugging, process diagrams