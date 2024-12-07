LCC = $(GBDKDIR)bin/lcc
AS  = $(LCC) -c
CC  = $(LCC) -Wa-l -Wl-m -Wl-j
LDFLAGS= -Wl-yt0x01 -Wl-yo4

BIN = simple_shmup.gb
OBJS = simple_shmup.o bank2.o bank3.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

simple_shmup.o: simple_shmup.c
	$(CC) $(CFLAGS) -c -o $@ $<

bank2.o: bank2.c
	$(CC) $(CFLAGS) -Wf-bo2 -c -o $@ $<

bank3.o: bank3.c
	$(CC) $(CFLAGS) -Wf-bo3 -c -o $@ $<

clean:
	rm -f *.o *.lst *.sym *.asm *.gb *.ihx *.noi *.map