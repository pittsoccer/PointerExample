
// A pointer is a variable that points to a variable
// A pointer makes a logical connection, NOT a physical connection

#include <iostream>
using namespace std;

int main() {
    int a;
    
    a = 10;
    
    // "i_ptr" & "a" are both variables
    int* i_ptr = nullptr;     // creates a pointer

    i_ptr = &a;               // assigns pointer to the address of "a"

    cout << i_ptr << endl;    // prints out the address of "a"

    cout << (*i_ptr) << endl; // prints out "10" or contents of "&a" (address a)

return 0;
}
