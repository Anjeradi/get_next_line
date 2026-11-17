#include "get_next_line.h"

char	*sized_strdup(const char *buff, size_t size)
{
	

}

char	*my_strjoin(const char *s1, const char *s2)
{
}

int closest_newline(const char *buff)
{
	const char *p;

	while (*p && *p != '\n')
		p++;
	if (*p == '\n')
		return (p - buff);
	return (-1);
}
