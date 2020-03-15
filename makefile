Hepsi: Derle Calistir

Derle:
	g++ -I ./include/ -c ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -I ./include/ -c ./src/Stack.cpp -o ./lib/Stack.o
	g++ -I ./include/ -c ./src/CYListe.cpp -o ./lib/CYListe.o
	g++ -I ./include/ ./src/Test.cpp ./lib/Dugum.o ./lib/Stack.o ./lib/CYListe.o -o ./bin/Test
Calistir:
	./bin/Test