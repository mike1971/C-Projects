// mybag.cpp

#include "mybag.h"
using namespace std;

MyBag::MyBag()
{
  //set member variables
    
    numAllocated = 10;
    numUsed = 0;
}

int MyBag::size()
{
    //provide size
    return numUsed;
}

void MyBag::add(string s)
{
    if (numUsed == numAllocated)
        cout << "Out of space" << endl;
    else arr[numUsed++] = s;
}
string MyBag::getAt(int index)
{
   //if next slot is out of bounds
  // produce error 
  //otherwise, return next index
    if (index <0 || index >= size())
        return "Out of bounds";
    else return arr[index];
}
int MyBag::locate(std::string s)
{
    for(int i=0; i<numUsed; i++)
    {
        if ( s == arr[i] )
           return i;
    }
}


