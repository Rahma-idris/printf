#include "holberton.h"

/**
 * handl_buf - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		//When buffer is full, print_buf the storage and then initialize it to 0. 
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	//Stores buffer increment in c
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
