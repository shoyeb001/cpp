#include <iostream>
using namespace std;

int main(){
    int a = 20;
    int &var = a;

    cout << a << "\n";
    cout << var << "\n";
    cout << "memory address of a " << &a;

    return 0;
}
