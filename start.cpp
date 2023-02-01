#include<iostream>
#include<string>
using namespace std;
void deleteFirstAndLast(string &s);
void swapValue(int &a, int &b);
int main(){
    //cout<<"Hello World"<<endl;
    string s1 = "I am eating rice.";
    s1 = s1 + "and it's yammy.";
    deleteFirstAndLast(s1);
    int a = 5, b = 7;
    swapValue(a, b);
    cout<<"a:"<<a<< " b:"<<b<<endl;

    cout<<s1 <<endl;
    //cout<<s1.size()<<endl;
    return 0;

}
void deleteFirstAndLast(string &s){
    cout<< "address:"<<&s<<"\n";
    s.erase(s.begin());
    s.pop_back();

}

void swapValue(int &a, int &b){
    cout<<"&a:"<< &a<< " &b:"<< &b<<endl;
    int temp = a;
    a = b;
    b = temp;
}
