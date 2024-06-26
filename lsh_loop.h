#include "lsh_read_line.h"
#include "lsh_split_line.h"
#include "lsh_execute.h"

void lsh_loop(){
    int status;
    char *line;
    char **args;
    
    do{
        printf("> ");
        line = lsh_read_line();
        args = lsh_split_line(line);
        status = lsh_execute(args);
        
        free(line);
        free(args);
    }while(status);
}