//mybag.h

#ifndef _mybag_h
#define _mybag_h
#include <iostream>

class MyBag
{
    public:
           MyBag(); //constructor
           MyBag( MyBag& other ); //copy constructor
           ~MyBag(); //destructor
           int size();
           void add(std::string s);
           std::string getAt(int index);
           int locate(std::string s);
           void doubleCapacity();
           void insertAt(int index, std::string ins);
           

    private:
        std::string *arr;
        int numUsed, numAllocated;
           
};

#endif
