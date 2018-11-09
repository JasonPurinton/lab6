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
    t6();
    t7();
    t8();
    t9();
}
bool Test_LinkedListOfInts::t1(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" isEmpty()= true for new list: ");
    if(list.isEmpty()== true){
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
    printTestMessage(" isEmpty()= false one addFront() and one addBack; ");
    list.addFront(1);
    list.addBack(4);
    if(list.isEmpty()){
       std::cout<<"LinkledList.size= "<<list.size()<<": ";
       m_bool= false;
    }
    else{
        std::cout<<"LinkledList.size = "<<list.size()<<": ";
        m_bool= true;
    }
    printPassFail(m_bool);
    return m_bool;
}

bool Test_LinkedListOfInts::t3(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" size()= 0 for new empty list? ");
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
    printTestMessage(" size()= 5 for three addFront() and two addBack() ");
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
    printTestMessage(" search() is correct index with 3 addFront and 2 addBack with multiples of the same value: ");
    list.addFront(-1);
    list.addFront(-1);
    list.addFront(0);
    list.addBack(1);
    list.addBack(1);
    if(list.search(-1) == false){
        m_bool= false;
    }
    else if(list.search(0) == false){
        m_bool= false;
    }
    else if(list.search(1) == false){
        m_bool= false;
    }
    else if(list.search(4) == false){
        m_bool= false;
    }
    else if(list.search(5) == false){
        m_bool= false;
    }
    else if(list.search(-2) == true){
        m_bool= false;
    }
    else if(list.search(2) == true){
        m_bool= false;
    }
    else{
        m_bool= true;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t6(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" addFront(3) to the front of list? ");
    list.addFront(1);
    list.addFront(2);
    int beforeFront= list.toVector()[0];
    list.addFront(3);
    int afterFront= list.toVector()[0];
    if(beforeFront== afterFront){
        std::cout<<"Value of front before addFront()= "<<beforeFront<<", Value of front after addFront(3)= "<<list.toVector()[0]<<": ";
        m_bool= false;
    }
    else{
        std::cout<<"Value of front before addFront()= "<<beforeFront<<", Value of front after addFront(3)= "<<list.toVector()[0]<<": ";
        m_bool= true;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t7(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" addBack(3) add 3 to the back of list? ");
    list.addBack(1);
    list.addBack(2);
    int beforeBack= list.toVector()[1];
    list.addBack(3);
    int afterBack= list.toVector()[2];
    if(beforeBack== afterBack){
        std::cout<<"Value of back before addback()= "<<beforeBack<<", Value of back after addback(3)= "<<afterBack<<": ";
        m_bool= false;
    }
    else{
        std::cout<<"Value of back before addback()= "<<beforeBack<<", Value of back after addback(3)= "<<afterBack<<": ";
        m_bool= true;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t8(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" removeFront() of list? ");
    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    int beforeFront= list.toVector()[0];
    list.removeFront();
    int afterFront= list.toVector()[0];
    if(beforeFront== afterFront){
        std::cout<<"Value of front before removeFront()= "<<beforeFront<<", Value of front after removeFront()= "<<afterFront<<": ";
        m_bool= false;
    }
    else{
        std::cout<<"Value of front before removeFront()= "<<beforeFront<<", Value of front after removeFront(3)= "<<afterFront<<": ";
        m_bool= true;
    }
    printPassFail(m_bool);
    return m_bool;
}
bool Test_LinkedListOfInts::t9(){
    m_testNum++;
    LinkedListOfInts list;
    printTestMessage(" removeBack() of list? ");
    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    int beforeBack= list.toVector()[2];
    list.removeBack();
    int afterBack= list.toVector()[2];
    if(beforeBack== afterBack){
        std::cout<<"Value of back before removeBack()= "<<beforeBack<<", Value of back after removeBack()= "<<afterBack<<": ";
        m_bool= false;
    }
    else{
        std::cout<<"Value of back before removeBack()= "<<beforeBack<<", Value of back after removeBack()= "<<afterBack<<": ";
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
