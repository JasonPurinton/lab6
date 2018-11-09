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
    t2();
    t3();
    t4();
}
bool Test_LinkedListOfInts::t1(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" is new list empty: ");

    if(list.isEmpty()){
        m_bool= true;
    }
    else{
        m_bool= false;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t2(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" is new list false if not empty: ");
    list.addFront(9);
    if(list.isEmpty()){
       std::cout<<"LinkledList.size= "<<list.size()<<" ";
       m_bool= false;
    }
    else{
        std::cout<<"LinkledList.size = "<<list.size()<<" ";
        m_bool= true;
    }
    printPassFail(m_bool);
    return m_bool;
}

bool Test_LinkedListOfInts::t3(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" size of empty list is zero: ");
    if(list.size()== 0){
        std::cout<<"LinkledList.size= "<<list.size()<<" ";
        m_bool= true;
    }
    else{
        std::cout<<"LinkledList.size= "<<list.size()<<" ";
        m_bool= false;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t4(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" is size 5: ");
    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    list.addFront(4);
    list.addFront(5);
    if(list.size()== 5){
        std::cout<<"LinkledList.size= "<<list.size()<<" ";
        m_bool= true;
    }
    else{
        std::cout<<"LinkledList.size= "<<list.size()<<" ";
        m_bool= false;
    }
    printPassFail(m_bool);
    return m_bool;
}


void Test_LinkedListOfInts::printPassFail(bool isPassed) const
{
    if(isPassed)
            std::cout<< "PASSED" << std::endl;
    else
            std::cout << "FAILED" << std::endl;
}
void Test_LinkedListOfInts::printTestMessage(std::string testDescription) const
{
      std::cout << "Test " <<m_testNum<< testDescription;
}
