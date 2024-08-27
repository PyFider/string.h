void *memcpy(void *dst, const void *src, size_t n)
{
	const char *bsrc;
	char *bdst;

	for (bdst = (char *)dst, bsrc = src; n--;)
		*bdst++ = *bsrc++;

	return dst;
}
