OUT = bin
CC = g++
CFLAGS = -Wall -I./includes
ODIR = build
SDIR = src
INC = I ./includes

.PHONY : clean

clean : 
	rm -f $(ODIR)/* $(OUT)/*
