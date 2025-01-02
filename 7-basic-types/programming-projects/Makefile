CFLAGS=-W -Wall -g

BIN=./bin/
SRC=./

PROG=ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 ex09 ex10 ex11 ex12 ex13 ex14 ex15
LIST=$(addprefix $(BIN), $(PROG))

all: $(LIST)

$(BIN)%: $(SRC)%.c
	$(CC) $(INC) $< $(CFLAGS) -o $@ $(LIBS)

clean:
	rm -f $(LIST)
