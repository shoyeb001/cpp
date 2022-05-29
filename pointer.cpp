//A pointer however, is a variable that stores the memory address as its value.

#include <iostream>
using namespace std;

int main(){
    int b = 32;
    int *a = &b;
    cout << "address of b" << a;
}
