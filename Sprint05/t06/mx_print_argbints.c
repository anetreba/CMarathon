int mx_atoi(const char*str);
void mx_printchar(char c);
void mx_printint(int n);

int main(int ac, char **av) {
    if (ac > 1) {
        int num = 0;
        
        for (int i = 1; av[i]; i++) {
            num = mx_atoi(av[i]);
            for (int j = sizeof(num)*8 - 1; j > -1; --j)
                mx_printint(num & (1 << j) ? 1 : 0);
            mx_printchar('\n');
        }
    }
    return 0;
}
