void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char*str);

int main(int ac, char **av) {
    int sum = 0;
    
    if (ac == 1)
        return 0;
    for (int i = 1; i < ac; i++)
        if (mx_atoi(av[i]) != -1)
           sum += mx_atoi(av[i]);
    mx_printint(sum);
    mx_printchar('\n');
    return 0;
}
