AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = input_state.gb
OBJS = input_state.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

