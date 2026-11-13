
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        printf("Fork failed\n");
        return 1;
    }

    if (pid == 0) {
        // Child process
        printf("Child process is exiting. PID: %d\n", getpid());
        exit(0);
    }
    else {
        // Parent process
        printf("Parent process PID: %d\n", getpid());
        printf("Child process PID: %d\n", pid);

        sleep(30);

        printf("Parent process exiting\n");
    }

    return 0;
}
