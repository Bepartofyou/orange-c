APPNAME = app
OBJECTS = cmdline.o main.o

CC = gcc
CXX = g++

all: $(OBJECTS)
		$(CXX) $^ -o $(APPNAME)
cmdline.o: cmdline.c
		$(CXX) -c $< -o $@
main.o: main.cpp
		$(CXX) -c $< -o $@
cmdline.c: cmdline.ggo
		gengetopt --input=cmdline.ggo --include-getopt

clean:
		rm -rf *.o $(APPNAME) cmdline.h cmdline.c
