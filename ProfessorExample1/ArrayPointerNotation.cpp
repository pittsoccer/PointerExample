//Tinker with arrays and pointer notation

#include <iostream>
using namespace std;

int main(){
    double ar[4] = {10, 20, 30, 40};
    cout << ar << endl;
    
    cout << *ar << endl;
    cout << *(ar+1) << endl;
    cout << *(ar+2) << endl;
    return 0;
}
