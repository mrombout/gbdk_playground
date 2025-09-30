LCC = $(GBDKDIR)bin/lcc
AS  = $(LCC) -c
CC  = $(LCC) -Wa-l -Wl-m

BIN = input_state.gb
OBJS = input_state.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map