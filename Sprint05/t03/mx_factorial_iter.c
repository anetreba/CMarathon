int mx_factorial_iter(int n) {
    if (n < 0 || n > 12)
        return 0;
    if (n == 0)
        return 1;
    int res = 1;
    
    for (; n > 0; n--)
        res *= n; 
    return res;
}
