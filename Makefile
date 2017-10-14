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
	find . -name *.o -exec rm -f {} \;
	@echo "[!] Output cleaned"
	@echo
