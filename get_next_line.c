#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE];
	static int read_chars;
	size_t buff_position;
	unsigned int is_line;
	char *line;

	is_line = 0;
	buff_position = 0;
	read_chars = 0;
	read_chars = read(fd, buffer, 0);
	if (read_chars == -1)
		return (NULL);
	read_chars = read(fd, buffer, BUFFER_SIZE);
	while (i < BUFFER_SIZE && buffer[i] != '\n')
		i++;
	if (i < BUFFER_SIZE && buffer[i] == '\n')
	{
		line = sized_strdup(buffer, i);
	}
	else {
		line = sized_strdup(buffer, i);
		while (!is_li

	return (line);
}
