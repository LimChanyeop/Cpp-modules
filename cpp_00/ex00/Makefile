NAME		= megaphone

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

SRCS		= megaphone.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all, $(NAME), clean, fclean, re