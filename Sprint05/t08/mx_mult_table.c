int mx_atoi(const char*str);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);

static void mx_swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int ac, char **av) {
    if (ac == 3 && mx_strlen(av[1]) == 1 && mx_strlen(av[2]) == 1) {
        int num1 = mx_atoi(av[1]);
        int num2 = mx_atoi(av[2]);
        int res = 0;
        
        if (num1 > num2)
            mx_swap(&num1, &num2);
        for (int i = num1; i <= num2; i++) {
            for (int j = num1; j <= num2; j++) {
                res = i * j;
                mx_printint(res);
                if(j < num2)
                    mx_printchar('\t');
            }
            mx_printchar('\n');
        }
    }
    return 0;
}

