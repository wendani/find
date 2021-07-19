AM_CFLAGS := -g -Wall -O2
CC	  := g++
CFLAGS	  := $(AM_CFLAGS)
LD	  := g++
APPS	  := find_equ
OBJS	  := $(APPS).o
SRCS	  := $(APPS).cpp

find_equ: find_equ.o
	$(LD) $(AM_CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -fr $(APPS) *.o *.out
