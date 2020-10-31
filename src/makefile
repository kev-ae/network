network: main.o
	g++ -o network main.o

main.o: main.cpp
	g++ -c main.cpp

run: network
	./network

clean:
	rm -rf network.exe
	rm -rf ./*.o
