#ifndef SECTION2_H
#define SECTION2_H

#define CRITICAL "CRITICAL"
#define ERROR "ERROR"
#define FAILED_LOGIN "FAILED_LOGIN"

typedef struct {
    int critical;
    int error;
    int failed_logging;
} Results;

void print_results(const Results *results);

#endif
