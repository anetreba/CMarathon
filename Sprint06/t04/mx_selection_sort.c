int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

static void mx_swap(char **a, char **b) {
    char *t = *a;
    *a = *b;
    *b = t;
}

int mx_selection_sort(char **arr, int size) {
    int swap = 0;
   
    if (arr && *arr && size > 0 && *(arr + 1)) {
        for (int i = 0; i < size - 1; i++) {
            int min_ind = i;
        
            for (int j = i + 1; j < size; j++){
                if (mx_strlen(arr[min_ind]) > mx_strlen(arr[j]))
                    min_ind = j;
                if (mx_strlen(arr[min_ind]) == mx_strlen(arr[j]))
                    if (mx_strcmp(arr[min_ind], arr[j]) > 0)
                        min_ind = j;
            }
            if (min_ind != i) {
                mx_swap(&arr[i], &arr[min_ind]);
                swap++;
            }
        }
    }
    return swap;
}
