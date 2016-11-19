##
## Makefile for  in /home/nileeda/Documents/Libmy/patin_a
## 
## Made by PATIN Adeline
## Login   <patin_a@etna-alternance.net>
## 
## Started on  Sun Nov 13 18:22:32 2016 PATIN Adeline
## Last update Sun Nov 13 18:22:34 2016 PATIN Adeline
##

CC	=	gcc
NAME	=	libmy.a
SRC	=	my_putchar.c \
		my_isneg.c \
		my_put_nbr.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_strncat.c \
		my_strstr.c \
		my_str_to_wordtab.c \
		my_strdup.c
OBJS	=	$(SRC:%.c=%.o)
RM	=	rm -f

$(NAME)	:	$(OBJS)
		ar r $(NAME) $(OBJS)
		ranlib $(NAME)
all	:	$(NAME)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
.PHONY	:	clean re all fclean
