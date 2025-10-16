# Makefile to build calculator program

calculator.exe: main.c add.c subtract.c multiply.c divide.c
	gcc main.c add.c subtract.c multiply.c divide.c -o calculator.exe

clean:
	rm -f calculator.exe

