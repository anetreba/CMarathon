#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(const char *s1, const char *s2) {
	char *new;

	if (s1 || s2) {
		if (!s2)
			return mx_strdup(s1);
		else if (!s1)
			return mx_strdup(s2);
		else if (s1 && s2) {
			new = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
			new = mx_strcat(mx_strcpy(new, s1), s2);
			return new;
		}
	}
	return NULL;
}
