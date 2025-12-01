NAME	= intern

CC		= c++
FLAG	= -Wall -Wextra -Werror -g
CPP		= -std=c++98

DIR_O	= file_o

SRC		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

GREEN	= \033[1;92m
RED		= \033[1;31m
BLUE	= \033[0;90m

OBJ		= $(patsubst %.cpp,$(DIR_O)/%.o,$(SRC))

all: $(NAME)

$(DIR_O):
	@mkdir -p $(DIR_O)
	
$(DIR_O)/%.o: %.cpp | $(DIR_O)
	@echo "Compilation de $< vers $@"
	@$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(FLAG) $(CPP) $(OBJ) -o $(NAME) && echo -e "$(GREEN)COMPILATION SUCCEED"\
	"\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"\
	"⣿⣿⣿⣿⣿⣿⣿⠛⢩⣴⣶⣶⣶⣌⠙⠫⠛⢋⣭⣤⣤⣤⣤⡙⣿⣿⣿⣿⣿⣿\n"\
	"⣿⣿⣿⣿⣿⡟⢡⣾⣿⠿⣛⣛⣛⣛⣛⡳⠆⢻⣿⣿⣿⠿⠿⠷⡌⠻⣿⣿⣿⣿\n"\
	"⣿⣿⣿⣿⠏⣰⣿⣿⣴⣿⣿⣿⡿⠟⠛⠛⠒⠄⢶⣶⣶⣾⡿⠶⠒⠲⠌⢻⣿⣿\n"\
	"⣿⣿⠏⣡⢨⣝⡻⠿⣿⢛⣩⡵⠞⡫⠭⠭⣭⠭⠤⠈⠭⠒⣒⠩⠭⠭⣍⠒⠈⠛\n"\
	"⡿⢁⣾⣿⣸⣿⣿⣷⣬⡉⠁⠄⠁$(BLUE)⠄⠄⠄⠄⠄⠄⠄$(GREEN)⣶$(BLUE)⠄⠄⠄⠄⠄⠄⠄⠄$(GREEN)⢀\n"\
	"⢡⣾⣿⣿⣿⣿⣿⣿⣿⣧⡀$(BLUE)⠄⠄⠄⠄⠄⠄⠄$(GREEN)⢀⣠⣿⣦⣤⣀⣀⣀⣀⠄⣤⣾\n"\
	"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣶⡶⢇⣰⣿⣿⣟⠿⠿⠿⠿⠟⠁⣾⣿⣿\n"\
	"⣿⣿⣿⣿⣿⣿⣿⡟⢛⡛⠿⠿⣿⣧⣶⣶⣿⣿⣿⣿⣿⣷⣼⣿⣿⣿⣧⠸⣿⣿\n"\
	"⠘⢿⣿⣿⣿⣿⣿⡇⢿⡿⠿⠦⣤⣈⣙⡛⠿⠿⠿⣿⣿⣿⣿⠿⠿⠟⠛⡀⢻⣿\n"\
	"$(BLUE)⠄⠄$(GREEN)⠉⠻⢿⣿⣿⣷⣬⣙⠳⠶⢶⣤⣍⣙⡛⠓⠒⠶⠶⠶⠶⠖⢒⣛⣛⠁⣾⣿\n"\
	"$(BLUE)⠄⠄⠄⠄⠄$(GREEN)⠈⠛⠛⠿⠿⣿⣷⣤⣤⣈⣉⣛⣛⣛⡛⠛⠛⠿⠿⠿⠟⢋⣼⣿⣿\n"\
	"$(BLUE)⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(GREEN)⠈⠉⠉⣻⣿⣿⣿⣿⡿⠿⠛⠃$(BLUE)⠄$(GREEN)⠙⠛⠿⢿⣿\n"\
	"$(BLUE)⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(GREEN)⢬⣭⣭⡶⠖⣢⣦⣀$(BLUE)⠄⠄⠄⠄$(GREEN)⢀⣤⣾⣿\n"\
	"$(BLUE)⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(GREEN)⢰⣶⣶⣶⣾⣿⣿⣿⣿⣷⡄$(BLUE)⠄$(GREEN)⢠⣾⣿⣿⣿\033[0m"

clean:
	@rm -rf $(DIR_O) && echo -e "${GREEN}FILE .O DELETED\033[0m"

fclean: clean
	@rm -f $(NAME) && echo -e "${GREEN}EXEC DELETED\033[0m"

re: fclean all

.PHONY: all clean fclean re