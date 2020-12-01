void mx_printchar(char c);

void mx_hexadecimal(void) {
    int c = 48;

    for (; c < 58; c++)
        mx_printchar(c);
    for (c = 65; c < 71; c++)
        mx_printchar(c);
    mx_printchar('\n');
}
