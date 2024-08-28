void *memmove(void *dst, const void *src, size_t n)
{
	const unsigned char *sbuf;
	unsigned char *dbuf;
	size_t i;

	dbuf = (unsigned char *)dst; 
	sbuf = (const unsigned char *)src;
	
	if (dbuf == sbuf)
		return dst;

	if (dbuf < sbuf) 
		for (i = 0; i < n; i++)
			dbuf[i] = sbuf[i];
	else
		for (i = n; i > 0; i--)
			dbuf[i-1] = sbuf[i-1];
	
	return dst;
}
