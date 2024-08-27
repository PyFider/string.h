#define memchr(s, c, n) _memchr(s, c, n)
void *_memchr(const char *s, int c, size_t n)
{
	for (;*s && n--;)
		if (*s++ == c)
			return (void *)(s-1);
	return NULL;
}	
