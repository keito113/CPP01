NAME    := ex03
SRCS    := main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS    := $(SRCS:.cpp=.o)

CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98 -pedantic

RM      := rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
