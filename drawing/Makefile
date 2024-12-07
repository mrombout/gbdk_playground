LCC = $(GBDKDIR)bin/lcc
CC  = $(LCC) -Wa-l -Wl-m

BIN = drawing.gb
OBJS = drawing.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map