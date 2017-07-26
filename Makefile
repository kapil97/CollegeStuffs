init:
	@echo "##########################"
	@echo "# CollegeStuffs! by a7r3 #"
	@echo "##########################"
	@echo
compilemsg:
	@echo "[!] Compiling all Programs"
	@echo
	bash ./jstuffs.sh

#all: collegestuffs

collegestuffs: init compilemsg $(OUTPUT)
	@echo
	@echo "[!] All Java Files compiled"
	@echo

clean:
	@echo "#########################"
	@echo "# Cleaning Output files #"
	@echo "#########################"
	$(RM) *.class
	@echo "[!] Output cleaned"
	@echo
