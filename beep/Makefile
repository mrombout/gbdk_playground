AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = beep.gb
OBJS = beep.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

