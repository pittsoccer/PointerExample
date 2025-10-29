#include <iostream>
using namespace std;


int main(){
    int a;
    a = 10; 
    cout << "a: " << a << endl;
    int* i_ptr = nullptr;
    cout << "i_ptr: " << i_ptr << endl;
    //cout << "*i_ptr: " << *i_ptr << endl; //CRASH
    i_ptr = &a;
    cout << "i_ptr: " << i_ptr << endl;
    cout << "&a: " << &a << endl;
    cout << "*i_ptr: " << *i_ptr << endl;
    int** i_ptr_ptr = nullptr;
    i_ptr_ptr = &i_ptr;
    cout << "i_ptr_ptr: " << i_ptr_ptr << endl;
    cout << "*i_ptr_ptr: " << *i_ptr_ptr << endl;
    cout << "**i_ptr_ptr: " << **i_ptr_ptr << endl;

    return 0;
}