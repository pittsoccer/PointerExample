//Tinker with Dynamic Array

#include <iostream>

using namespace std;

int main(){
    int* ptr = nullptr;
    int size = 0;
    cout << "How many in your array?" << endl;
    cin >> size;
    ptr = new int[size]; //ptr is on the stack, but points
                         // to something on the heap
    for (int i = 0; i < size; i++)
        ptr[i] = 2 * i;

    for (int i = 0; i < size; i++)
        cout << ptr[i] << "\t";

    delete [] ptr;
    ptr = nullptr;

    return 0; 
}