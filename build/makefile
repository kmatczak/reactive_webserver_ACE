CC=g++

INCL= -I/usr/local/include/ace/
LDFLAGS= -L/usr/local/lib/ -lpthread -lACE
SRCDIR= ../src
INCLDIR=../include
BUILDDIR=.
TARGET=http_server
OBJS=$(BUILDDIR)/main.o $(BUILDDIR)/Echo_Svc_Handler.o  $(BUILDDIR)/Echo_Acceptor.o  
CFLAGS=-Wall

.PHONY: clean

all: $(OBJS)
	$(CC) $^ -o $(BUILDDIR)/$(TARGET) $(LDFLAGS)
	rm -vf $(BUILDDIR)/*.o

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) $(INCL) -c -o $@ $<

clean:
	@echo "clean"
	rm -vf $(BUILDDIR)/*.o
	rm -vf $(BUILDDIR)/$(TARGET)
