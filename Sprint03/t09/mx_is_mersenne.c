#include <stdbool.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    if (mx_is_prime(n)) {
        for (int i = 0; ((1 << i) - 1) <= n; ++i) {
            if ((1 << i) - 1 == n)
                return true;
        }
    }
   return false;
}
