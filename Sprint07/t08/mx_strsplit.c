#include <stdlib.h>

char *mx_strnew(const int size);
int mx_count_words(const char *str, char c);

int mx_count_letters(const char *s, char c) {
	int i = 0;

	while (s[i] != c && s[i])
		i++;
	return i;
}

char **mx_strsplit(const char *s, char c) {
	int j = 0;
	char **new;
	int count_lett;
	int i = 0;

	if (!s)
		return NULL;
	new = (char **)malloc(sizeof(char *) * (mx_count_words(s, c) + 1));
	while (s[i]) {
        if (s[i] != c) {
			count_lett = mx_count_letters(&s[i], c);
			new[j] = mx_strnew(count_lett);
			for (int k = 0; k < count_lett; k++)
				new[j][k] = s[i++];
			j++;
		}
		else
			i++;
	}
	new[j] = NULL;
	return new;
}
