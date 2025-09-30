LCC = $(GBDKDIR)bin/lcc
CC  = $(LCC) -Wa-l -Wl-m

BIN  = background.gb
OBJS = background.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map