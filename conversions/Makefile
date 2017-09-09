CC=gcc
CFLAGS=-g

all : FCConversionTable

FCConversionTable : FCConversionTable.o
	$(CC) $< -o $@

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf *.o FCConversionTable *~
