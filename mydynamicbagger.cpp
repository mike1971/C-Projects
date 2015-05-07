// bagger.cpp

#include <iostream>
#include "mydynamicbag.h"
using namespace std;


int main()
{

    //create object
    MyBag b;
    //call insert function
    b.add("Jason");
    b.add("Ely");
    b.add("Nathan");
    b.insertAt(0, "LaDawn");
    MyBag c;
    while (true) {
       cout << "Enter name (ENTER to quit):";
        string name;
        getline (cin, name);
        if (name == "") break;


          c.add(name);
    }

    //display contents of bag--notice how much the same they are!
    for (int i=0; i < b.size(); i++)
        cout << "b Bag contains: " << b.getAt(i) << endl;
    for (int i=0; i < c.size(); i++)
        cout << "c Bag contains: " << c.getAt(i) << endl;
    
    
    //locate string
    cout << "Nathan is located in b Bag at: " << b.locate("Nathan") << endl;
    cout << "Nathan is located in c Bag at: " << c.locate("Nathan") << endl;

   //copy bag b into a new bag b2
   MyBag b2(b);
   for (int i=0; i < b2.size(); i++)
        cout << "b2 Bag contains: " << b2.getAt(i) << endl;
    return 0;

}





