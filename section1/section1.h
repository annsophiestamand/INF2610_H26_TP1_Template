#ifndef SECTION1_H
#define SECTION1_H

typedef struct {
    const char* input_file;
    const char* output_file;
} Files;

void count_errors(char* error_type, int start_line, int end_line, Files* files);

#endif