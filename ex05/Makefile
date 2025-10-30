NAME = harl
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

CYAN = \033[0;36m
YELLOW = \033[0;33m
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)[✔] $(NAME) compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)[✔] Object files removed!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)[✔] Executable removed!$(RESET)"

re: fclean all

.PHONY: all clean fclean re