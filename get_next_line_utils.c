#include "get_next_line.h"

char	*sized_strdup(const char *buff, size_t size)
{
}

char	*my_strjoin(const char *s1, const char *s2)
{
}

int		closest_newline(const char *buff, size_t bsize)
{
	const char *p;

	while (bsize-- && *p != '\n')
		p++;
	if (*p == '\n')
		return (p - buff);
	return (-1);
}

char	*read_while_not_newline(int fd, t_buffer *stream, size_t bsize)
{
	int nl_found;
	int read_chars;
	static size_t end;

	nl_found = 0;
	while (!nl_found)
	{
		read_chars = read(fd, buffer, BUFFER_SIZE);
		if (read_chars == 0)
			return (NULL);
		end = (stream->buffer + stream->last_index, BUFFER_SIZE - stream->last_index);
		if (end >= 0)
		{
			nl_found = 1;
			line = sized_strdup(stream->buffer + stream->last_index, end);
		}
		else
		{
			while ()
		}
	}
	return (line);
}

