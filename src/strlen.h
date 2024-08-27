#define strlen(str) _strlen(str)
size_t _strlen(const char *str) 
{
	size_t len;

	for (len = 0; *str != '\0'; str++)
		++len;

	return len;
}
