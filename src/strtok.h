char *strtok(char *str, const char *delim)
{ 
    char *res, *last;
    
    if (str == NULL) str = last;
    if (str == NULL) return NULL;

    // Пропускаем начальные разделители
    for (;*str && strchr(delim, *str); ++str);
    if (*str == '\0') return NULL;

    // Ищем конец токена
    res = str;
    for (;*str && !strchr(delim, *str); ++str);

	if (*str) {
        *str = '\0';  // Завершаем токен нулевым символом
        last = str + 1;  // Сохраняем контекст для следующего вызова
        return res;
	}
	
    last = NULL;  // Если достигли конца строки, сбрасываем контекст
    return res;
}
