#include <iostream>
using namespace std;


int main(){
    int a;
    a = 10; 
    cout << "a: " << a << endl;
    int* i_ptr = nullptr;
    
    i_ptr = &a;
    cout << "i_ptr: " << i_ptr << endl;
    cout << "&a: " << &a << endl;
    cout << "*i_ptr: " << *i_ptr << endl;
    *i_ptr = 5;
    
    cout << "a: " << a << endl;
    return 0;
}