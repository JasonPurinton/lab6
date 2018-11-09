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
   //Call to tests "tx()". Prints results and returns if true==pass
   bool t1();//Is list empty?
   bool t2();//Is list not empty?
   bool t3();//Is size zero?
   bool t4();//Is size correct if 5 values added?
   bool t5();//Search
   bool t6();//Search
   bool t7();//Search
   bool t8();//Search
   bool t9();//Search

   void printPassFail(bool isPassed) const;

   void printTestMessage(std::string testDescription) const;

private:
    int m_testNum= 0;
    bool m_bool;

};

#endif
