#include <stdlib.h>

char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
void mx_strdel(char **str);
int mx_isspace(char c);

char *mx_strtrim(const char *str) {
    if (str) {
		int i = 0;
		int len = mx_strlen(str) - 1;

		for (; mx_isspace(str[i]); i++);
		for (; mx_isspace(str[len]); len--);
		int size = len - i + 1;
		char *new = mx_strnew(size);
		
		
		for (int j = 0; j < size; j++, i++)
			new[j] = str[i];
		return (new == NULL) ? mx_strnew(0) : new;
	}
	return NULL;
}
