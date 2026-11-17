#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE];
	size_t buff_position;
	char *line;
	int read_chars;

	buff_position = 0;
	read_chars = 0;
	read_chars = read(fd, buffer, 0);
	if (read_chars == -1)
		return (NULL);

	
	return (line);
}
