#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#define USAGE "Usage: cp file_from file_to\n"
#define ER_READ "Error: Can't read from file %s\n"
#define ER_WRITE "Error: Can't write to %s\n"
#define ER_CLOSE "Error: Can't close fd %d\n"
#define PERMITIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define READ_BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
