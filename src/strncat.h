char *strncat(char *dst, const char *src, size_t n)
{
	dst += strlen(dst);

	for (;*src && n--;)
		*dst++ = *src++;

	*dst++ = 0;
	return dst;
}
