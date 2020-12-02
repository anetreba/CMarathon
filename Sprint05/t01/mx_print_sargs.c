int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int ac, char **av) {
	char *tmp;
	int i = 1;
	int len = ac;

	while (i < len) {
		if (mx_strcmp(av[i], av[i + 1]) > 0) {
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
		}
		i++;
		if (i == len - 1) {
			i = 1;
			len--;
		} 
	}
	for (int i = 1; i < ac; i++) {
	    mx_printstr(av[i]);
	    mx_printchar('\n');
	}
	return 0;
}
