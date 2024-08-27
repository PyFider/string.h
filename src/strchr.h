char *strchr(const char *s, int c)
{
	for (;*s;)
	  if (*s++ == c)
	    return (char *)s-1;

	return NULL;
}
