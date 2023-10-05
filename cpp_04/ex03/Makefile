# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 10:21:40 by eabdelha          #+#    #+#              #
#    Updated: 2022/08/22 15:46:01 by eabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re 

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = materia

INCLUDES =	AMateria.h			\
			Ice.h				\
			Cure.h				\
			ICharacter.h		\
			Character.h			\
			IMateriaSource.h	\
			MateriaSource.h
			

SRC	=	main.cpp			\
		AMateria.cpp		\
		Ice.cpp				\
		Cure.cpp			\
		Character.cpp		\
		MateriaSource.cpp	

		
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	@$(CC) $(CFLAGS) $(STDCPP) $(OBJECTS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) $(STDCPP) -o $@ -c $<
	
clean:
	@rm -f $(OBJECTS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all
