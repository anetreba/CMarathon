#include "calculator.h"

void mx_validation(char **av, t_operation *operation);

void print_and_calculate(t_operation *operation, int num1, int num2) {
    mx_printint(operation->f(num1, num2));
    mx_printchar('\n');
}

int main(int ac, char **av) {
    if (ac == 4) {
        t_operation operation;
        
        mx_validation(av, &operation);
        int num1 = mx_atoi(av[1]);
        int num2 = mx_atoi(av[3]);
        
        print_and_calculate(&operation, num1, num2);
        return 0;
    }
    mx_printerr("usage: ./calc [operand1] [operation] [operand2]\n");
    return 1;
}
