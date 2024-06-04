##
## EPITECH PROJECT, 2022
## blank project
## File description:
## Makefile
##

SRC = $(shell find src -name "*.c")
CFLAGS = -W -Wextra -Wall
LDFLAGS =
CPPFLAGS = -I./include
TARGET = SBMLparser
OBJ = $(SRC:.c=.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(LDFLAGS)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(TARGET)

coding_style : fclean
	~/Documents/coding-style-checker/coding-style.sh . ..
	cat ../coding-style-reports.log

re : fclean all 