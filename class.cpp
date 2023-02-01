#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        Person *father, *mother;
        void printPerson(){
            cout<<"name:"<<name<<"\n";
            cout<<"father's name: "<< father->name << "\n";
            cout<<"mother's name: "<< mother->name <<"\n";
        };
    };

class Father : Person{
public:
    string occupation;
    void setInformation(string name,string fahersName,string mothersName){
        this->name = name;
        this->father->name = fahersName ;
        this->mother->name = mothersName;
    }
    void print_information(){
        cout<<"into the print_information "<<"\n";
        cout<< "name: "<< this->name<<"\n";
        cout<<" father's name"<< this->father->name<<"\n";
        cout<<"mother's name"<< this->mother->name<<"\n";
    }
};
int main(){


    Person eva = {"eva", new Person, new Person};
    eva.father->name = "Shahidul";
    eva.mother->name = "Naher";
    //eva.printPerson();

    Father shahidul;
    shahidul.occupation = "Advocate";
    cout<<shahidul.occupation<<"\n";
    shahidul.setInformation("Abul", "Abdul", "Shaherjan");
    shahidul.print_information();
}
