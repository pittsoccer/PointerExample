#include <iostream>
using namespace std;

int main(){
    int* ar = nullptr;
    int size = 0;
    cout << "How many in your array?" << endl;
    cin >> size;
    ar = new int[size];
    //could not use ar using array or pointer notation
    delete [] ar; // deallocates what ar points to
    ar = nullptr;
    return 0;
}