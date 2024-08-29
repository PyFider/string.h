char *strncpy(char *dst, const char *src, size_t n)
{
	char *buf = dst;

	for (;*src && n--;)
		*dst++ = *src++;

	return buf;
}
