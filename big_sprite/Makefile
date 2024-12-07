LCC = $(GBDKDIR)bin/lcc
CC  = $(LCC) -Wa-l -Wl-m

BIN = big_sprite.gb
OBJS = big_sprite.o sprite.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map

