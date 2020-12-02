int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    char *sort;
    int j = 0;
    int swap = 0;

    if (arr && *arr && size > 0) {
        for (int i = 1; i < size && arr[i]; i++){
            sort = arr[i];
            for(j = i - 1; j >= 0 && (mx_strlen(arr[j]) > mx_strlen(sort)); j--){
                arr[j + 1] = arr[j];
                swap++;
            }
            arr[j + 1] = sort;
        }
    }
    return swap;
}
