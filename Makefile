CC=g++

CFLAGS=-g
CFLAGS+=-std=c++1y

#$(warning $(CFLAGS))

######## log ########

log.o: log.cpp log.h
#	$(warning $(CFLAGS))
	$(CC) $(CFLAGS) -c $< -o $@

# test
test: test.cpp log.o
#	$(warning $(CFLAGS))
	$(CC) $(CFLAGS) -I./log $^ -o $@

######## all ########
all: test
	@echo "do make all"
	
######## clean ########
.PHONY: clean help
clean:
	@echo "do clean"
	rm -f log.o test
	
help:
	@echo "make clean"
	@echo "make all"