#ifdef MAIN_H
#define MIAN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistad.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
