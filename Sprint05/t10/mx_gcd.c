int mx_gcd(int a, int b) {
    int res = (b == 0) ? a : mx_gcd(b, a % b);
    
    return (res > 0) ? res : -res;
}
