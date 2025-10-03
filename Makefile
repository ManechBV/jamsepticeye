
couille: *.c
	cc -Wall -o game *.c -I. -lraylib -lm -ldl -lpthread -lX11 -lGL -lGLU


clean: game
	rm game
