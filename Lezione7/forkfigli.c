#include <stdio.h>
int main (void) {
  int pid;
  pid = fork ();
  if (pid != 0) { // parent
    printf ("PID %d and PPID %d.\n", getpid (), getppid ());
    printf ("My child’s PID is %d.\n", pid);
    sleep(5);
    int pid = fork();
    if(pid != 0){ // parent
        sleep(15); 
        wait(NULL);
        sleep(15);
    }else{ // child 2
        sleep(5);
        printf ("PID %d and PPID %d.\n", getpid (), getppid ());
    }
  }
  else { // child 1
    printf ("PID %d and PPID %d.\n", getpid (), getppid ());
  }

  printf ("PID %d terminates.\n", getpid () ); /* everyome prints this */
    exit(0);
  return 0;
}

