AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = big_sprite_animation.gb
OBJS = big_sprite_animation.o cards.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

