#include <stdlib.h>

int mx_comparator(const int *arr, int size, int x, bool(*compare)(int, int)) {
    if (size < 0 || arr == NULL)
		return -1;
	for (int i = 0; i < size; i++) {
		if (compare(x, arr[i]) == 1)
			return i;
	}
	return -1;
}
