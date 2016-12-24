AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = huge_sprite.gb
OBJS = huge_sprite.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~ *.lst *.map

