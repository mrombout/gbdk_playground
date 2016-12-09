AS = lcc -c
CC = lcc -Wa-l -Wl-m

BIN = simple_shmup.gb
OBJS = simple_shmup.o bank2.o bank3.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -rf $(BIN) $(OBJS) *~

