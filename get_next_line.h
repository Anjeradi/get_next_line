#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

char	*get_next_line(int fd);
char	*sized_strdup(const char *buff, size_t size);
char	*my_strjoin(const char s1, const char s2);

#endif /* GET_NEXT_LINE_H */
