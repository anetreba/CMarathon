int mx_isdigit(char c);
int mx_isspace(char c);

int mx_strlen(const char *str);

int mx_atoi(const char*str) {
    int i = 0;
    int num = 0;
    int sign = 1;
    
    while (mx_isspace(str[i]))
        i++;
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    for (; mx_isdigit(str[i]); i++)
        num = num * 10 + str[i] - 48;
    return sign * num;
}
