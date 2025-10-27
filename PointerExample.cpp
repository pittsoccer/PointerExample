
#include <iostream>
using namespace std;

int main() {
    int a;
    a = 10;

    // output "a"
    cout << "a: " << a << endl;

    // output "address of a"
    cout << "Address of a: " << &a << endl;

    // create a pointer
    int *i_ptr = nullptr;

    // output pointer before assignment
    cout << "i_ptr (before assignment): " << i_ptr << endl;

    // assign pointer to "address of a"
    i_ptr = &a;

    // output address of pointer after assignment
    cout << "i_ptr (after assignment): " << i_ptr << endl;

    //output value of pointer after assignment
    cout << "*i_ptr: " << *i_ptr << endl;

    // assign a to 20
    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    a = 20;
    cout << "a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "i_ptr: " << i_ptr << endl;
    cout << "*i_ptr: " << *i_ptr << endl;

    // assign value of pointer to 30
    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    *i_ptr = 30;
    cout << "a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "i_ptr: " << i_ptr << endl;
    cout << "*i_ptr: " << *i_ptr << endl;
    
return 0;
}
