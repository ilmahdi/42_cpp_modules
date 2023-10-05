# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 10:21:40 by eabdelha          #+#    #+#              #
#    Updated: 2022/08/23 16:58:23 by eabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re 

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = forms

INCLUDES =	Bureaucrat.h					\
			Form.h							\
			ShrubberyCreationForm.h			\
			RobotomyRequestForm.h			\
			PresidentialPardonForm.h		

SRC	=	main.cpp					\
		Bureaucrat.cpp				\
		Form.cpp					\
		ShrubberyCreationForm.cpp	\
		RobotomyRequestForm.cpp		\
		PresidentialPardonForm.cpp	

		
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -o $@ -c $<
	
clean:
	@rm -f $(OBJECTS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all
