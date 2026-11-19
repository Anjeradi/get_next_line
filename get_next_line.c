#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_buffer stream;
	char *line;

	line = "";
	read_chars = read(fd, NULL, 0);
	if (read_chars == -1)
		return (NULL);
	stream->fd = fd;

	
	return (line);
}
