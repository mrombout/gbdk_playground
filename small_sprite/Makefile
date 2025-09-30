LCC = $(GBDKDIR)bin/lcc
AS  = $(LCC) -c
CC  = $(LCC) -Wa-l -Wl-m

BIN = small_sprite.gb
OBJS = small_sprite.o sprite.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map