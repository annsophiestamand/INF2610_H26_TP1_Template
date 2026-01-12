#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <pthread.h>
#include "section1.h"
#include "section3.h"

void print_results(const Results *results)
{
    printf("CRITICAL      : %d\n", results->critical);
    printf("ERROR         : %d\n", results->error);
    printf("FAILED_LOGIN  : %d\n", results->failed_logging);
}

int main(int argc, char *argv[]) {
    if(argc != 3){
        return 1;
    }

    // TODO : Implémenter la fonctionnalité avec des threads POSIX

    // TODO : Appeler print_results() avec les résultats finaux

    return 0;
}
