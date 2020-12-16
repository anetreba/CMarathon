void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int flag = 0;
    
    for (int i = 0; str[i]; i++) {
        if (str[i] != delim) {
            mx_printchar(str[i]);
            flag = 0;
        }
        if (flag == 0 && str[i] == delim) {
            mx_printchar('\n');
            flag = 1;
        }
    }
    mx_printchar('\n');
}
