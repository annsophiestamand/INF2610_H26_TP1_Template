#ifndef SECTION4_H
#define SECTION4_H

typedef enum {
    FAILED_LOGIN = 1,
    ERROR = 2,
    CRITICAL = 3
} Severity;

typedef struct {
    int id;
    Severity severity;
    long timestamp;
} Incident;

typedef struct {
    Incident *arr;
    int left;
    int right;
    int depth;
} SortTask;

extern Incident incidents[];
extern const int INCIDENT_COUNT;

void print_sorted_list(const Incident *incidents);

#endif