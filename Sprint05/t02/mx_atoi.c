int mx_isdigit(char c);
int mx_isspace(char c);

int mx_strlen(const char *str) {
    int i = 0;
    
    while(str[i])
        i++;
    return i;
}

int mx_atoi(const char*str) {
    int i = 0;
    int num = 0;
    int sign = 1;
    
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    for (; mx_isdigit(str[i]); i++)
        num = num * 10 + str[i] - 48;
    if (mx_strlen(str) > i && !(mx_isdigit(str[i])))
        return -1;
    return sign * num;
}
