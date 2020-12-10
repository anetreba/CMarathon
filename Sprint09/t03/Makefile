NAME = minilibmx.a

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
CC = clang

OBJD = obj
SRCD = src

INCD = inc

SRCC = mx_atoi mx_isdigit mx_isspace mx_printchar \
	   mx_printstr mx_printint mx_strlen mx_strcmp \
	   mx_strcpy

OBJS = $(addsuffix .o, $(addprefix $(addsuffix /, $(OBJD)), $(SRCC)))
SRCS = $(addsuffix .c, $(addprefix $(addsuffix /, $(SRCD)), $(SRCC)))

.PHONY: all MINILIBMX $(OBJD) uninstall clean reinstall

all: MINILIBMX
	
MINILIBMX: $(OBJD)
	@$(CC) $(CFLAGS) -I $(INCD) -c $(SRCS)
	@printf "\x1b[32mcompile obj file:\x1b[33m ok\x1b[0m\n"
	@mv $(addsuffix .o, $(SRCC)) $(OBJD)
	@ar -rcs $(NAME) $(OBJS)
	@printf "\x1b[32mcreate minilibmx:\x1b[33m ok\x1b[0m\n"
	
$(OBJD):
	@mkdir -p obj
	
uninstall: clean
	@rm -f $(NAME)
	@printf "\x1b[31mdelete \x1b[32m$(NAME)\x1b[33m ok \x1b[0m\n"
	
clean:
	@rm -rf $(OBJD)
	@printf "\x1b[31mdelete \x1b[32m$(OBJD)\x1b[33m ok \x1b[0m\n"
	
reinstall: uninstall MINILIBMX
