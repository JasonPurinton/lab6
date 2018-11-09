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
    t5();
}
bool Test_LinkedListOfInts::t1(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" isEmpty()= true for new list: ");

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
    printTestMessage(" isEmpty()= false with one addFront(); ");
    list.addFront(1);
    if(list.isEmpty()){
       std::cout<<"LinkledList.size= "<<list.size()<<": ";
       m_bool= false;
    }
    if(!list.isEmpty()){
        std::cout<<"LinkledList.size = "<<list.size()<<": ";
        m_bool= true;
    }
    printPassFail(m_bool);
    return m_bool;
}

bool Test_LinkedListOfInts::t3(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" size()= 0 for new empty list; ");
    if(list.size()== 0){
        std::cout<<"LinkledList.size= "<<list.size()<<": ";
        m_bool= true;
    }
    else{
        std::cout<<"LinkledList.size= "<<list.size()<<": ";
        m_bool= false;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t4(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" size()= 5 for three addFront() and two addBack(); ");
    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    list.addBack(4);
    list.addBack(5);
    if(list.size()== 5){
        std::cout<<"LinkledList.size= "<<list.size()<<": ";
        m_bool= true;
    }
    else{
        std::cout<<"LinkledList.size= "<<list.size()<<": ";
        m_bool= false;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t5(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" search() is correct index with 3 addFront and 2 addBack: ");
    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    list.addBack(4);
    list.addBack(5);
        if(list.search(1) == false){
            m_bool= false;
        }
        else if(list.search(2) == false){
            m_bool= false;
        }
        else if(list.search(3) == false){
            m_bool= false;
        }
        else if(list.search(4) == false){
            m_bool= false;
        }
        else if(list.search(5) == false){
            m_bool= false;
        }
        else if(list.search(0) == true){
            m_bool= false;
        }
        else if(list.search(0) == true){
            m_bool= false;
        }
        else{
            m_bool= true;
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
