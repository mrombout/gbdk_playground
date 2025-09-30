LCC = $(GBDKDIR)bin/lcc
AS  = $(LCC) -c
CC  = $(LCC) -Wa-l -Wl-m

BIN = move_sprite.gb
OBJS = move_sprite.o ufo.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map