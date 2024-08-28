char *strnstr(const char *haystack, const char *needle, size_t n) 
{
    if (*needle == '\0') return (char *)haystack;

    size_t i, nlen = strlen(needle);
    for (; *haystack && n--; ++haystack) {
      for (i = 0; *(haystack+i) == *(needle+i) && *(needle+i); ++i);                
      if (i == nlen) 
        return (char *)haystack;
    }

    return NULL;
}
