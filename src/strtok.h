char *strtok(char *str, const char *delim)
{ 
    char *res, *last;
    
    if (str == NULL) str = last;
    if (str == NULL) return NULL;

    /* SKIPPING START SEPARATORS */
    for (;*str && strchr(delim, *str); ++str);
    if (*str == '\0') return NULL;

    /* FINDING END OF TOKEN */
    res = str;
    for (;*str && !strchr(delim, *str); ++str);

    if (*str) { /* IF NOT END THEN END TOKEN */
        *str = '\0';
        last = str + 1;  /* SAVING CONTEXT FOR NEXT CALL */
        return res;
    }
	
    last = NULL; /* IF NOT END THEN ABORT CONTEXT */
    return res;
}
