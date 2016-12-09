AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = move_sprite.gb
OBJS = move_sprite.o ufo.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

