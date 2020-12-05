#include <stdio.h>

char *mx_strjoin(const char *s1, const char *s2);
void mx_strdel(char **str);

char *mx_concat_words(char **words) {
    if (words && *words) {
        char *tmp1;
        char *tmp2 = NULL;
        
        for (int i = 0; words[i]; i++) {
            tmp1 = mx_strjoin(tmp2, words[i]);
            if (tmp2)
                mx_strdel(&tmp2);
            if (words[i + 1]) {
                tmp2 = mx_strjoin(tmp1, " ");
                if (tmp1)
                    mx_strdel(&tmp1);
            }
        }
        return tmp1;
    }
    return NULL;
}
