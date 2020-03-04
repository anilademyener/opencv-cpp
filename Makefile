CC = g++
OUT = cvtest
PARAMS = -Wall `pkg-config --cflags --libs opencv` -rdynamic

build:
	@$(CC) main.cpp $(PARAMS) -o $(OUT).o
