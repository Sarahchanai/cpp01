NAME = "Harl 2.0"

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Harl.cpp Harl.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
clean :
	rm -f $(NAME)
	
fclean : clean

re : fclean all

.PHONY : all clean fclean re