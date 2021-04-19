alex.o: ./src/alex.cpp ./src/parser.h ./src/lexer.h ./src/grammar.h
	g++ -std=c++11 -c -Wall ./src/alex.cpp

alex: ./alex.o
	g++ -std=c++11 -o alex -Wall ./alex.o
	mv alex.o ./tmp
	mv alex ./bin

clean: 
	rm * ./bin
	rm * ./tmp
