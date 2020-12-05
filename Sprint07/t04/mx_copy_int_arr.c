#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (size > -1 && src) {
        int *new = (int *)malloc(sizeof(int) * size);

        if (!new)
            return NULL;
        for (int i = 0; i < size; i++)
            new[i] = src[i];
        return new;
    }
    return NULL;
}
