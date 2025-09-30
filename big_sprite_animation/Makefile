LCC = $(GBDKDIR)bin/lcc
CC  = $(LCC) -Wa-l -Wl-m

BIN = big_sprite_animation.gb
OBJS = big_sprite_animation.o cards.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map