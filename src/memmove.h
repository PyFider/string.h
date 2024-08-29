void *memmove(void *dst, const void *src, size_t n)
{
	if (!strlen((const char *)dst))
		return memcpy(dst, src, n);

}
