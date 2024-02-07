# Makefile for Ex1
# Compiler
CC = gcc

#Warrnings
CFLAGS= -g -Wall

my_mat.o:my_mat.c my_mat.h 
	$(CC) $(CFLAGS) -c my_mat.c

my_graph.o: my_graph.c my_mat.h
	$(CC) $(CFLAGS) -c my_graph.c

my_Knapsack.o: my_Knapsack.c my_mat.h 
	$(CC) $(CFLAGS) -c my_Knapsack.c

my_graph: my_graph.o my_mat.o
	$(CC) $(CFLAGS) my_graph.o my_mat.o -o my_graph

my_Knapsack: my_Knapsack.o my_mat.o 
	$(CC) $(CFLAGS) my_Knapsack.o my_mat.o -o my_Knapsack

all: my_graph my_Knapsack
clean:
	rm -f *.o
	rm -f *.a	
	rm -f my_graph
	rm -f my_Knapsack