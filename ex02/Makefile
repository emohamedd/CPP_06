CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = cpp

SRCS = A.cpp B.cpp Base.cpp C.cpp main.cpp

HEADERS = A.hpp B.hpp Bases.hpp C.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re
