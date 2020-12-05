#include <stdlib.h>

char *mx_strtrim(const char *str);
int mx_isspace(char c);
void mx_strdel(char **str);
int	mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_del_extra_whitespaces(const char *str) {
    if (str) {
	    char *tmp = mx_strnew(mx_strlen(str));
        char *result;
        int flag = 0;
        int j = 0;

        for (int i = 0; i < mx_strlen(str); i++) {
            if (!(mx_isspace(str[i])) && !(flag = 0))
                tmp[j++] = str[i];
            else if (!flag && (flag = 1))
                tmp[j++] = ' ';
        }
        result = mx_strtrim(tmp);
        mx_strdel(&tmp);
        return result;
    }
    return NULL;
}
