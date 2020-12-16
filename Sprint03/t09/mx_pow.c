double mx_pow(double n, unsigned int pow) {
    int res = 1;
    
    while (pow--)
        res *= n;
    return res;
}
