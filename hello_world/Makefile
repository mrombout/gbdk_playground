AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = hello_world.gb
OBJS = hello_world.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

