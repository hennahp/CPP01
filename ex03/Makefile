NAME = weapon
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g

CYAN = \033[0;36m
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m

SRCS = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "$(GREEN)[$(NAME)] Compiled successfully!$(RESET)"

%.o: %.cpp
		@$(CC) $(CFLAGS) -c $< -o $@
		@echo "$(CYAN)[Compiling] $<$(RESET)"

clean:
		@rm -f $(OBJS)
		@echo "$(YELLOW)[Cleaned] Object files removed.$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED)[Fcleaned] Executable removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re