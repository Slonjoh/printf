#include "main.h"

/**
 * buf_wr - Increment the overflow count of buffer.
 * @buf: The buffer.
 */
void buf_wr(buffer *buf)
{
	buf->overflow++;
}

/**
 * buf_inc - Increment the buffer index.
 * @buf: The buffer.
 */
void buf_inc(buffer *buf)
{
	buf->index++;
	if (buf->index >= buf->size)
		buf_wr(buf);
}

/**
 * buf_write - Write buffer contents to stdout.
 * @buf: The buffer.
 */
void buf_write(buffer *buf)
{
	write(1, buf->str, buf->index);
	buf->index = 0;
}
