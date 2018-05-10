
vpath %.c src
vpath %.h include

CFLAGS := -std=c11 -Wall -Wextra
CPPFLAGS := -I include

SRCS := main.c
OBJS := $(patsubst %.c, %.o, $(SRCS))

PROGRAM := com.exe

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	cc $(CFLAGS) $(CPPFLAGS) -o $@ $^

%.o: %.c
	cc $(CFLAGS) $(CPPFLAGS) -c $@ $<