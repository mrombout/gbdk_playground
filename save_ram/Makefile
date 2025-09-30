LCC = $(GBDKDIR)bin/lcc
AS  = $(LCC) -c
CC  = $(LCC) -Wa-l -Wl-m -Wl-yt3 -Wl-yo4 -Wl-ya4

BIN = save_ram.gb
OBJS = save_ram.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map