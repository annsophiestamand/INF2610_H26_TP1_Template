#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include "section4.h"

void print_sorted_list(const Incident *incidents)
{
    for (int i = 0; i < INCIDENT_COUNT; i++) {
        printf("%d, ", incidents[i].id);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {

    // TODO : Implémenter le merge sort
    // TODO : Appeler print_sorted_list() avec la liste triée

    return 0;
}