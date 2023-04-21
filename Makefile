NAME := push_swap
CC   := gcc
CCFLAGS := -Wall -Wextra -Werror -g -fsanitize=address
LIBFT := ./LIBFT_folder

HEADERS := -I ./include -I $(LIBFT)/include
LIBS := $(LIBFT)/libft.a
SRCS := $(shell find ./src -iname "*.c")
OBJS := ${SRCS:.c=.o}

ifeq ($(shell uname -s), Darwin)
	GLFW := $(shell brew --prefix glfw)/lib
	LIBS += -L $(GLFW)
else
	LIBS += -ldl
endif

all: libft $(NAME)

libft:
	@$(MAKE) -C $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT) clean


fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT) fclean

re: clean all

.PHONY: all, libft, clean, fclean, re
