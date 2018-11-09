/**
*	@file Test_LinkedListOfInts.cpp
* 	@author Jason Purinton
*  @Reference John Gibbons
*	@date 2018.11.4
**/
#include "Test_LinkedListOfInts.h"


Test_LinkedListOfInts::Test_LinkedListOfInts(int numNodes)
{
}

void Test_LinkedListOfInts::runTests(){
    //Call to tests "tx()". Prints results and returns bool true==pass
    t1();//Is size zero?

}

bool Test_LinkedListOfInts::t1(){
   LinkedListOfInts list;
   printTestMessage("size of empty list is zero: ");

    if(list.isEmpty()){
        printPassFail(true);
        return true;
    }
    else{
        printPassFail(false);
        return false;
    }
}
void Test_LinkedListOfInts::printPassFail(bool isPassed) const
{
        if(isPassed)
                std::cerr << "PASSED" << std::endl;
        else
                std::cerr << "FAILED" << std::endl;
}
void Test_LinkedListOfInts::printTestMessage(std::string testDescription)
{
      std::cout << '\n' << "Test " << testDescription;
}
