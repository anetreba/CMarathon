void mx_arr_rotate(int *arr, int size, int shift) {
    if (size > 1 && arr && *arr) {
        int temp = 0;
        
        if (shift < 0)
            shift = size + shift;
        else if (shift > size)
            shift %= size;
        while (shift != 0)  {
            temp = arr[size - 1];
            for(int i = size - 1; i > 0; i--)
                arr[i] = arr[i - 1];      
            arr[0] = temp;
            shift--;
        }
    }
}
