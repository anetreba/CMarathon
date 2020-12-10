#include <time.h>

double mx_timer(void (*f)()) {
    if (f) {
	    double start = clock();
	    f();
	    double stop = clock();
	    return (stop - start) / CLOCKS_PER_SEC; 
    }
    return -1;
}
