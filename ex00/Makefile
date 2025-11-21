NAME = BraiiiiiiinnnzzzZ

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
clean :
	rm -f $(NAME)
	
fclean : clean

re : fclean all

.PHONY : all clean fclean re