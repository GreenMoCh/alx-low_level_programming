#ifndef MAIN_H
#define MAIN_H

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *message);
void exit_with_error(int code, const char *message);
void copy_file(const char *file_form, const char *file_to);
int _putchar(char c);

#endif
