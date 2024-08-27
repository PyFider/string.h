char *strtok(char *str, const char *delim)
{
	if (!str || !delim)
		return NULL;

	const char *start_delim = delim;
	for (;*str; str++)
		for (delim = start_delim; *delim; ++delim)
			if (*str == *delim) {
				*str = '\0';
				return str;
			}

	return NULL;
}
