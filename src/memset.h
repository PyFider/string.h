#define memset(dst, c, n) _memset(dst, c, n)
void *_memset(char *dst, int c, size_t n) 
{
	char *start = dst;

	for (;n--;)
		*dst++ = c;

	return (void *)start;
}
