char *strpbrk(const char *s1, const char *s2)
{
	const char *bs2, *bs1;

	bs1 = s1, bs2 = s2;
	for (s1 = bs1; *s1; s1++)
		for (s2 = bs2; *s2; s2++)
			if (*s1 == *s2)
				return (char *)s1;

	return NULL;
}
