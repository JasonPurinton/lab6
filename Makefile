#	Author: Jason Purinton
# Reference John Gibbons
#	Date: 2018.11.09


prog: main.o  Test_LinkedListOfInts.o
	g++ -g -Wall -std=c++11 main.o Test_LinkedListOfInts.o LinkedListOfInts.o -o prog


main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp


Test_LinkedListOfInts.o:  Test_LinkedListOfInts.cpp
	g++ -g -Wall -std=c++11 -c Test_LinkedListOfInts.cpp


clean:
	rm main.o *.*~ prog
