int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    int res = a / mx_gcd(a, b) * b;
    
    return (res > 0) ? res : -res;
}
