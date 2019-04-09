AS = lcc -c
CC = lcc -Wa-l -Wl-yp0x143=0x80

BIN = color.gbc
OBJS = color.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

