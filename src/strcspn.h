#define __BITOP_(a,b,op) \
 ((a)[(size_t)(b)/(8*sizeof *(a))] op (size_t)1<<((size_t)(b)%(8*sizeof *(a))))

size_t strcspn(const char *s1, const char *s2)
{
	size_t byteset[32/sizeof(size_t)];
	size_t res;

	res = 0;
	
	for (;   __BITOP_(byteset, *(unsigned char *)s2, |=) && *s2++  ;)       ;
	for (; !(__BITOP_(byteset, *(unsigned char *)s1, &)  && *s1++) ;) ++res;
	
	return res;
}
