CFLAGS=-W -Wall -g

BIN=./bin/
SRC=./

PROG=oct-hex sum2
LIST=$(addprefix $(BIN), $(PROG))

all: $(LIST)

$(BIN)%: $(SRC)%.c
	$(CC) $(INC) $< $(CFLAGS) -o $@ $(LIBS)

clean:
	rm -f $(LIST)
