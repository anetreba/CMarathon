int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    if (arr && *arr && size > 0) {
	    int left = 0;
	    int right = size - 1;
	    int mid = 0;
	    *count = 0;

	    while (left <= right) {
		    mid = left + (right - left) / 2;
		    *count += 1;
		    if (arr[mid]) {
		        if (mx_strcmp(arr[mid], s) == 0)
		        	return mid;
		        else if (mx_strcmp(arr[mid], s) > 0)
		            right = mid - 1;
		        else
		            left = mid + 1;
		    }
	    }
    }
	*count = 0;
	return -1;
}
