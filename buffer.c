#include "main.h"

/**
 * buf_new - Create a new buffer.
 *
 * Return: A pointer to the new buffer.
 */
buffer *buf_new(void)
{
	buffer *buf = (buffer *)malloc(sizeof(buffer));

	if (buf)
	{
		buf->size = BUFFER_SIZE;
		buf->str = (char *)malloc(buf->size);
		if (buf->str)
			buf->index = 0;
	}
	return (buf);
}

/**
 * buf_end - Free memory and end buffer.
 * @buf: The buffer to end.
 */
void buf_end(buffer *buf)
{
	if (buf->index > 0)
		buf_write(buf);
	free(buf->str);
	free(buf);
}

