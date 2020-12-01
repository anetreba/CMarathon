void mx_printchar(char c);

void mx_only_printable(void) {
    for (int c = 32; c <= 127; c++)
        mx_printchar(c);
    mx_printchar('\n');
}
