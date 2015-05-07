//mybag.h

#ifndef _mybag_h
#define _mybag_h
#include <iostream>

class MyBag
{
    public:
           MyBag();
           
           //size
           int size();

           //add
           void add(std::string s);
           //get
           std::string getAt(int index);
           int locate(std::string s);

    private:
           //array
        std::string arr[10];
           //number used, allocated
        int numUsed, numAllocated;
           
};

#endif
