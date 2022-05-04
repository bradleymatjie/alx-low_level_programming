#ifndef MAIN_H
#define MAIN_H

/***********
 * LIBRARIES
 ************/
#include <stdio.h>
#include <stdllib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>

/****************
 * Prototypes*
 ****************/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
