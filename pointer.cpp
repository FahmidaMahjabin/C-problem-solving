#include<iostream>
using namespace std;
void func();
int main(){
    int a = 8;

    int * p = &a;
    cout<< "p:"<< p<<"\n";
    *p = 10;
    cout<< "p:"<< p<<"\n";
    cout<<"a:"<< a<< "\n";
    func();
};
void func()
{
    int* q = new int;
    int a = 10;
    q = &a;
    cout<<"q:"<<q<<"\n";
    cout<<"*q:"<<*q;
    cout<<"&a:"<<&a<<"\n";
    return;
}

