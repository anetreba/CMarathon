#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
	char *dst;

	dst = mx_strnew(mx_strlen(str));
	if (dst == NULL)
		return NULL;
	return mx_strcpy(dst, str);
}
