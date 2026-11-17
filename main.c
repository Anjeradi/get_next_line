#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	char buffer[10];
	int fd = open("./lorem_ipsum.txt", O_RDONLY);

	printf("%d\n", read(fd, buffer, 0));
	close(fd);
	return 0;
}
