void *memmove(void *dst, const void *src, size_t n)
{
	if (!strlen((const char *)dst) || !strlen((const char *)src))
		return memcpy(dst, src, n);
	return NULL;
}
