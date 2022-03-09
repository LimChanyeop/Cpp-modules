NAME		= PhoneBook

CXX			= c++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS		= main.cpp \
				PhoneBook.cpp \
				Information.cpp

OBJS		= $(SRCS:%.cpp=%.o)

RM			= rm -f


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS): $(SRCS)
	echo $(OBJS)
	$(CXX) $(CXXFLAGS) -c $^

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all, $(NAME), clean, fclean, re