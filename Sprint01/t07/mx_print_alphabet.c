void mx_printchar(char c);

void mx_print_alphabet(void) {
    for(int a = 65; a < 91; a++)
        (a % 2) ? mx_printchar(a) : mx_printchar(a + 32);
    mx_printchar('\n'); 
}
