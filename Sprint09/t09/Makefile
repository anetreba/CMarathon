NAME = calc

INC = minilibmx.h \
	calculator.h

CC = clang

INC_DIR = inc

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
LFLAGS = -I $(INC_DIR)

SRC = mx_atoi.c \
    mx_isdigit.c \
    mx_isspace.c \
    mx_printchar.c \
    mx_printint.c \
    mx_printstr.c \
    mx_strcpy.c \
    mx_strcmp.c \
    mx_strlen.c \
    mx_calculator.c \
    mx_printerr.c \
    mx_validation.c \
    mx_action.c 

OBJ_DIR = ./obj/
SRC_DIR = ./src/

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(LFLAGS) -o $@ -c $<

all: CALC clean

CALC: $(OBJ)
	@mkdir -p $(OBJ_DIR)
	@ar rc $(NAME) $(OBJ)
	@clang $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	@rm -rf $(OBJ_DIR)
uninstall: clean
	@rm -f $(NAME)
reinstall: uninstall all
