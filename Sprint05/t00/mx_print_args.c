int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printint(int n);
void mx_printchar(char c);

int main(int ac, char **av) {
    mx_printint(ac);
    mx_printchar('\n');
    for (int i = 1; i < ac; i++) {
        mx_printstr(av[i]);
        mx_printchar('\n');
    }
    return 0;
}
