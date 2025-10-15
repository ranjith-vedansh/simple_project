# Makefile to build calculator program

cal.exe: main.c add.c subtract.c multiply.c divide.c
	gcc main.c add.c subtract.c multiply.c divide.c -o cal.exe

clean:
	rm -f cal.exe

