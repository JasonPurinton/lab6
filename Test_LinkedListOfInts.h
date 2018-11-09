/**
*	@file Test_LinkedListOfInts.h
* 	@author Jason Purinton
*  @Reference John Gibbons
*	@date 2018.11.4
**/
#ifndef TEST_LINKED_LIST_OF_INTS_H
#define TEST_LINKED_LIST_OF_INTS_H

#include <iostream>
#include "LinkedListOfInts.h"


class Test_LinkedListOfInts{
public:


   Test_LinkedListOfInts(int numNodes);


   void runTests();
   //Call to tests "tx()". Prints results and returns bool true==pass
   bool t1();//Is size zero?


void printPassFail(bool isPassed) const;

void printTestMessage(std::string testDescription);


};

#endif
