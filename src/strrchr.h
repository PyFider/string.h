#define strrchr(s, c) _strrchr(s, c)
char *_strrchr(char *s, int c)
{
	char *s_start = s;
	
	if (*s == c || s == NULL)
		return s;

	for (s += strlen(s); s != s_start;)
		if (*s-- == c)
			return (char *)(s+1);

	return NULL;
}
