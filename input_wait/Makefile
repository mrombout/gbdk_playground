AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = input_wait.gb
OBJS = input_wait.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

