clang  -std=c11 -Wall -Wextra -Werror -Wpedantic -c mx_atoi.c \
                                                    mx_isdigit.c \
                                                    mx_isspace.c \
                                                    mx_printchar.c \
                                                    mx_printint.c \
                                                    mx_printstr.c \
                                                    mx_strcpy.c \
                                                    mx_strcmp.c \
                                                    mx_strlen.c 
ar rc minilibmx.a mx_atoi.o \
                mx_isdigit.o \
                mx_isspace.o \
                mx_printchar.o \
                mx_printint.o \
                mx_printstr.o \
                mx_strcpy.o \
                mx_strcmp.o \
                mx_strlen.o
                
rm -rf mx_atoi.o \
                mx_isdigit.o \
                mx_isspace.o \
                mx_printchar.o \
                mx_printint.o \
                mx_printstr.o \
                mx_strcpy.o \
                mx_strcmp.o \
                mx_strlen.o
                