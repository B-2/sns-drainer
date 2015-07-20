CC=cc

all: snsd_write.o
	ar rcs libsnsd.a snsd_write.o

snsd_write.o: snsd_write.c
	$(CC) -c -o snsd_write.o snsd_write.c

clean:
	rm -f *.o libsnsd.a
