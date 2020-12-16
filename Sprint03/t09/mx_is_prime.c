#include <stdbool.h>

bool mx_is_prime(int num) {
    if (num < 2)
        return false;
    if (num < 4)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i < num; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
           return false;
    return true;
}
