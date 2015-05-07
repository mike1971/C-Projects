// mybag.cpp

#include "mydynamicbag.h"
using namespace std;

MyBag::MyBag() //constructor
{
  //set member variables
    arr = new string[1];
    numAllocated = 1;
    numUsed = 0;
}

MyBag::MyBag( MyBag& other ) //copy constructor
{
    if(this == &other)
        return;
    else
    {
        numUsed = other.numUsed;
        numAllocated=other.numAllocated;
        std::string *newarr = new std::string[numAllocated];  
        for(int i = 0; i<numUsed; i++)
             newarr[i] = other.arr[i];
        arr = newarr;
    }    

}

MyBag::~MyBag() //destructor
{
    delete[] arr;
}

int MyBag::size()
{
    //provide size
    return numUsed;
}

void MyBag::add(string s)
{
    if (numUsed == numAllocated)
    //    cout << "Out of space" << endl;
        doubleCapacity();
    arr[numUsed++] = s;
}
string MyBag::getAt(int index)
{
   //if next slot is out of bounds
  // produce error 
  //otherwise, return next index
    if (index <0 || index >= size())
        cout << "Out of bounds" << endl;
    return arr[index];
}
int MyBag::locate(std::string s)
{
    for(int i=0; i<numUsed; i++)
    {
        if ( s == arr[i] )
           return i;
    }
    return -1;
}
void MyBag::doubleCapacity()
{
    string *bigger = new string[numAllocated*2];
    
    for (int i = 0; i < numUsed; i++)
        bigger[i] = arr[i];
    delete[] arr;
    arr = bigger;
    numAllocated *= 2;


}
void MyBag::insertAt(int index, std::string ins)
{
     if (numUsed == numAllocated)
    //    cout << "Out of space" << endl;
        doubleCapacity();
     if (index < 0 || index >= numAllocated)
         cout << "out of bounds" << endl;
     else
     {
         for (int i=numUsed-1; i>=index; i--)
                  arr[i+1] = arr[i];
         arr[index] = ins;
         numUsed++;
     }
}


