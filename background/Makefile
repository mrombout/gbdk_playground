AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = background.gb
OBJS = background.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf *.o *.lst

