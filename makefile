all:
	gcc -I ./include -c ./src/Random.c -o ./lib/Random.o
	gcc -I ./include -c ./src/RastgeleKarakter.c -o ./lib/RastgeleKarakter.o
	gcc -I ./include -c ./src/Test.c -o ./lib/Test.o
	gcc ./lib/*.o -o ./bin/Test