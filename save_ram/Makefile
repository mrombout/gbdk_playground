AS = lcc -c
CC = lcc -Wa-l -Wl-m -Wl-yt3 -Wl-yo4 -Wl-ya4

BIN = save_ram.gb
OBJS = save_ram.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~