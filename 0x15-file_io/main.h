#ifndef HEADER_H

#define HEADER_H

#include <sys/types.h>

#define BUFSIZE 1204

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int _putchar(char c);

#endif
