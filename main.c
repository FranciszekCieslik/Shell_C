#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lsh_loop.h"

int main(){
    printf("\n\033[0;32mShell is running...\n");
    lsh_loop();
    printf("\033[0m");
    return EXIT_SUCCESS;
}