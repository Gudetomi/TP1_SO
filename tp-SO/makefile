all:	shellso

shellso:	main.o	shell.o	strings.o
	gcc	main.o	shell.o	strings.o	-o	shellso

main.o:	main.c	shell.c	strings.c
	gcc	-c	-Wall	shell.c
	gcc	-c	-Wall	main.c
	gcc	-c	-Wall	strings.c

clean:
	rm main.o	shell.o	strings.o	shellso
