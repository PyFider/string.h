#define memcmp(s1, s2, n) _memcmp(s1, s2, n)
int _memcmp(const char *s1, const char *s2, size_t n)
{
	for (;*s1 == *s2 && *s1 && *s2 && n--;)
		s1++, s2++;
	return *(const unsigned char *)s1-*(const unsigned char *)s2;
}
