#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (src && src_size > 0 && *dst_size > 0) {
        int *arr = (int *)malloc(sizeof(int) * (*dst_size));
        
        if (arr) {
            int count = 0; 
            
            for (int i = 0; i < src_size; i++) {
                int exist = 0;
    
                for (int j = 0; j < count; j++) {
                    if (arr[j] == src[i]) {
                        exist = 1;
                        break;
                    }
                }
                if (!exist)
                    arr[count++] = src[i]; 
            }
            return arr;
        }
    }
    return NULL;
}
