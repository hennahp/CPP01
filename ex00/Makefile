NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

CYAN = \033[0;36m
YELLOW = \033[0;33m
RED = \033[0;31m
GREEN = \033[0;32m
RESET = \033[0m

SRCS = main.cpp \
	   Zombie.cpp \
	   newZombie.cpp \
	   randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)[✔] $(NAME) has been compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(CYAN)[✔] Compiled $< successfully!$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)[✔] Object files have been removed!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)[✔] $(NAME) executable has been removed!$(RESET)"

re: fclean all

.PHONY: all clean fclean re