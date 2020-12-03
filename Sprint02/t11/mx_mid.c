int mx_mid(int a, int b, int c) {
    return ((a > b) ? (b > c) ? b : (a > c) ? c : a : (b > c) ? (a > c) ? a : c : b);
}
