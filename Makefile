# the CC: gcc for C program, define as g++ for C++
CC = gcc
# CC flags - none for now
# CFLAGS = -Wall

# Include all C files
TARGET = $(wildcard *.c)
OUTPUT = $(TARGET:.c=.o)

init:
	@echo
	@echo "CollegeStuffs! by a7r3"
	@echo
compilemsg:
	@echo "Compiling all Programs"
	@echo

aboutme.o:
	$(CC) -o aboutme.o aboutme.c
avg_noneg_while.o:
	$(CC) -o avg_noneg_while.o avg_noneg_while.c
avg_while.o:
	$(CC) -o avg_while.o avg_while.c
calc_switch.o:
	$(CC) -o calc_switch.o calc_switch.c
div5_ternary.o:
	$(CC) -o div5_ternary.o div5_ternary.c
evenprint_while.o:
	$(CC) -o evenprint_while.o evenprint_while.c
fact_while.o:
	$(CC) -o fact_while.o fact_while.c
fibo_while.o:
	$(CC) -o fibo_while.o fibo_while.c
grade.o:
	$(CC) -o grade.o grade.c
helloworld.o:
	$(CC) -o helloworld.o helloworld.c
ninputs_do_while.o:
	$(CC) -o ninputs_do_while.o ninputs_do_while.c
nnos_while.o:
	$(CC) -o nnos_while.o nnos_while.c
oddprint.o:
	$(CC) -o oddprint.o oddprint.c
sumofcubes_while.o:
	$(CC) -o sumofcubes_while.o sumofcubes_while.c
table.o:
	$(CC) -o table.o table.c

#all: collegestuffs

collegestuffs: init compilemsg $(OUTPUT)
	@echo
	@echo All C Files built
	@echo

clean:
	@echo
	@echo Cleaning Output files
	$(RM) *.o
	@echo Output cleaned
	@echo
