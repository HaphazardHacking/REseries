CC := gcc
CCFLAGS := -O1 -fno-stack-protector -lcrypt
CCFLAGS64 := $(CCFLAGS) -m64
%: %.c
	make $@.64
%.64: %.c
	$(CC) $(CCFLAGS64) $< -o $@
	objcopy -N FILE $@
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%.64,$(SRCS))
all: $(PROGS)
.PHONY: clean
clean:
	rm -f *.64