int strncmp(const char *s1, const char *s2, size_t n)
{
	for (; n--; s1++, s2++)
		if (*s1 != *s2)
			return ( *s1-*s2 );
	return 0;
}
