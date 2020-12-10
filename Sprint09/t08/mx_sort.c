void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    if (arr) {
        char *tmp;
	    int i = 0;

	    while (i < size) {
		    if (f(arr[i], arr[i + 1])) {
			    tmp = arr[i];
			    arr[i] = arr[i + 1];
			    arr[i + 1] = tmp;
			    count++;
		    }
		    i++;
		    if (i == size - 1) {
			    i = 0;
			    size--;
		    } 
	    }
    }
}
