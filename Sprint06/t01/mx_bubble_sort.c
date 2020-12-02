int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int count = 0;
    if (arr) {
        char *tmp;
	    int i = 0;

	    while (i < size) {
		    if (mx_strcmp(arr[i], arr[i + 1]) > 0) {
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
	return count;
}
