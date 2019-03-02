AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = detect_gb.gb
OBJS = detect_gb.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~