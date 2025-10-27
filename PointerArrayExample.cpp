
#include <iostream>
using namespace std;

int main() {
    int ar[4] = {10, 20, 30, 40};
    
    // output addresses
    cout << "~~~ Addresses ~~~" << endl;
    cout << ar << endl;        // output first address in array
    cout << ar+1 << endl;      // output second address in array
    cout << ar+2 << endl;      // output third address in array
    cout << ar+3 << endl;      // output fourth address in array
    
    cout << endl;

    // output values
    cout << "~~~ Values  ~~~" << endl;
    cout << *ar << endl;       // output first value in array
    cout << *(ar + 1) << endl; // output second value in array
    cout << *(ar + 2) << endl; // output third value in array
    cout << *(ar + 3) << endl; // output fourth value in array

return 0;
}
