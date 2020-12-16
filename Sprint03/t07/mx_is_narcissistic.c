#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int pow = 0;
    int n = num;
    int res = 0;
    
    while (n) {
        pow++;
        n /= 10;
    }
    for (int i = pow; i > 0; i--) {
        res += mx_pow(num % 10, pow);
        num /= 10;
    }
    return res;
}
