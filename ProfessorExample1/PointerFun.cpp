//Tinker with pointers

#include <iostream>
using namespace std;

int main(){
    int a;
    a = 10;
    cout << "a: " << a << endl;
    cout << "address of a: " << &a << endl;
    
    int *i_ptr = nullptr;
    cout << "i_ptr: " << i_ptr << endl;
    i_ptr = &a;
    cout << "i_ptr: " << i_ptr << endl;
    cout << "*i_ptr: " << *i_ptr << endl;

       
    a = 20; 

    cout << "a: " << a << endl;
    cout << "address of a: " << &a << endl;
    cout << "i_ptr: " << i_ptr << endl;
    cout << "*i_ptr: " << *i_ptr << endl;
    cout << "*************" << endl;
    *i_ptr = 30;
    cout << "a: " << a << endl;
    cout << "address of a: " << &a << endl;
    cout << "i_ptr: " << i_ptr << endl;
    cout << "*i_ptr: " << *i_ptr << endl;
    return 0;
}