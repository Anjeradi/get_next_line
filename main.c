#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096
char *get_next_line(int fd);

int main(void)
{
	char *buffer;
	int fd = open("./lorem_ipsum.txt", O_RDONLY);

	while ((buffer = get_next_line(fd)))
		printf("%s", buffer);

	close(fd);
	return 0;
}



char *get_next_line(int fd)
{
	size_t i;
	static char buffer[BUFFER_SIZE];
	char *line = "";
	int read_chars;

	if (read(fd, 0, 0) == -1)
		return (NULL);
	i = 0;
	read_chars = read(fd, buffer, 1);
	while (read_chars > 0 && buffer[i] != '\n')
	{
		i++;
		if (i == BUFFER_SIZE)
		{
			line = strjoin(line, buffer, bsize);
			i = 0;
		}
		read_chars = read(fd, buffer + i, 1);
	}
	if (read_chars == 0)
		return NULL;
	buffer[i + 1] = '\0';
	return (buffer);
}


