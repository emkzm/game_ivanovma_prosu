#include <iostream>
using namespace std;

void func1(){
    cout << "FUNC1" << endl;
}

void func2(){
    cout << "FUNC2" << endl;
}

void ch_f(void(*&f)()){
    if (f == func1)
        f = func2;
    else 
        f = func1;
}

int main(){
    int* integer = new int (15);
    void (*func)();
    func();
    ch_f(func);
    func();
}