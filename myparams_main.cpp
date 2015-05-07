#include <iostream>
using namespace std;

void fooByVal(int num)
{
    
    cout << "passed num by value num = " << num << endl;
}

void fooByRef(int& num)
{
    cout << "passed num by reference = " << num << endl;
    num = 100;
    cout << "changed num by reference. num = " << num << endl;
}

void fooPointerByVal(int* p)
{
    cout << "passed pointer by value *p = " << *p << endl;
    cout << "passed pointer by value p = " << p << endl;
    *p = 15;
    cout << "fooPointerByVal changed pointee *p = " << *p << endl;
}

int * fooPointerByVal2(int* p)
{
    *p = 150;
    return p;
}

void fooPointerByRef(int* & p)
{
    int *q = new int;
    *q = 20;

    cout << "passed pointer by reference *p = " << *p << endl;
    cout << "passed pointer by reference p = " << p << endl;

    p = q;
   
    cout << "changed where pointer p points. p = " << p << endl;
    cout << "changed where pointer p points. *p= " << *p << endl;
}

int main()
{
  int num = 5;
  int &number = num;
 int *p;
 p = new int;
 *p = 10;

  cout << "before foo num = " << num << endl;
  cout << "before foo number = " << number << endl;
  cout << "before foo &number = " << &number << endl;

  //cout << "before foo p = " << p << endl;
  //cout << "before foo *p = " << *p << endl;

 // fooByVal(num);
//  fooByRef(num);
  //fooPointerByVal(p);
  //fooPointerByRef(p);
  p = fooPointerByVal2(p);
  //cout << "after foo, num = " << num << endl;
  cout << "after foo, p = " << p << endl;
  cout << "after foo, *p =" << *p << endl;

}


