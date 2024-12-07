LCC = $(GBDKDIR)bin/lcc
CC  = $(LCC) -Wa-l -Wm-yC

BIN = color.gbc
OBJS = color.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map