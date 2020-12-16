int mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);
int mx_islower(int c);

void mx_reverse_case(char *s) {
    while (*s) {
        if (mx_isupper(*s))
            *s = mx_tolower(*s);
        else if (mx_islower(*s))
            *s = mx_toupper(*s);
        s++;
    }
}
