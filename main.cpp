/**
*	@file main.cpp
* 	@author Jason Purinton
*  @Reference John Gibbons
*	@date 2018.11.4
**/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test_LinkedListOfInts.h"
#include "List.h"

int main(int argc, char** argv){
	std::cout <<'\n'<< "**Running Test**"<<'\n';
	const int numNodes= 20;//Number of nodes to add to list
	Test_LinkedListOfInts myTester(numNodes);
	myTester.runTests();

	std::cout <<'\n'<< "**Test Finished**"<<'\n'<<std::endl;

	return (0);

}
