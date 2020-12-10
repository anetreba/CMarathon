#include "calculator.h"

void mx_parse_stuct(t_operation *operation, char c) {
    if (c == '+')
        operation->f = &mx_add;
    else if (c == '-')
        operation->f = &mx_sub;
    else if (c == '*')
        operation->f = &mx_mul;
    else if (c == '/')
        operation->f = &mx_div;
    else if (c == '%')
        operation->f = &mx_mod;
    operation->op = c;
}

static int is_valid_operation(char **oper, t_operation *operation) {
    if (mx_strlen(oper[2]) != 1)
        return INCORRECT_OPERATION;
    char c = oper[2][0];
    
    if ((c == '/' || c == '%') && mx_strcmp(oper[3], "0") == 0)
        return DIV_BY_ZERO;
    else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%') {
        mx_parse_stuct(operation, c);
        return 3;
    }
    return INCORRECT_OPERATION;
}

static bool is_valid_number(char *a)
{   
    int i = 0;
    
    if (a[i] == '-' || a[i] == '+')
        i++;
    for (; a[i]; i++) {
        if (!mx_isdigit(a[i]))
            return false;
    }
    return true;
}

static int is_valid_operand(char **av) {
    if (!(is_valid_number(av[1])) || !(is_valid_number(av[3])))
        return INCORRECT_OPERAND;
    return 3;
}

void mx_print_err(enum e_error error) {
    if (error == INCORRECT_OPERAND)
        mx_printerr("error: invalid number\n");
    else if (error == INCORRECT_OPERATION)
        mx_printerr("error: invalid operation\n");
    else if (error == DIV_BY_ZERO)
        mx_printerr("error: division by zero\n");
    else
        return;
    exit(1);
}

void mx_validation(char **av, t_operation *operation) {
    enum e_error error = is_valid_operand(av);
    
    if (error != 3 || (error = is_valid_operation(av, operation)) != 3)
        mx_print_err(error);
}
