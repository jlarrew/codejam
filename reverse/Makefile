CFLAGS := -Wall
DEBUG_CFLAGS := -g -O0 ${CFLAGS}
RELEASE_CFLAGS := -O3 ${CFLAGS}

REVERSE_OBJS := reverse.o codejam.o

%.o: %.c %.h

reverse: ${REVERSE_OBJS}

debug: reverse
	${CC} ${DEBUG_CFLAGS} $

release: reverse

clean:
	rm -f reverse ${REVERSE_OBJS}
