char *mx_strchr(const char*s, int c);
void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int ac , char **av) {
    ac = 0;
    mx_printstr(mx_strchr(av[ac], '/') + 1);
    mx_printchar('\n');
    return 0;
}
