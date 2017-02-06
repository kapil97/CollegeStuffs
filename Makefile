# the CC: gcc for C program, define as g++ for C++
CC = gcc
# CC flags - none for now
# CFLAGS = -Wall

# Include all C files
TARGET = $(wildcard *.c)
OUTPUT = $(TARGET:.c=.o)

init:
	@echo "##########################"
	@echo "# CollegeStuffs! by a7r3 #"
	@echo "##########################"
	@echo
compilemsg:
	@echo "[!] Compiling all Programs"
	@echo
	bash ./cstuffs.sh

#all: collegestuffs

collegestuffs: init compilemsg $(OUTPUT)
	@echo
	@echo "[!] All C Files built"
	@echo

clean:
	@echo "#########################"
	@echo "# Cleaning Output files #"
	@echo "#########################"
	$(RM) *.o
	@echo "[!] Output cleaned"
	@echo
