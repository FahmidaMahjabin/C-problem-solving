//make a class that make dynamic array
#include<iostream>
using namespace std;
class Array{
private:
    int *array1;
    int capacity;
    int sizeOfArray;
    void increaseSize(){
        capacity = 2 * capacity;
        int *doubledArray = new int[capacity];
        for(int i = 0; i < sizeOfArray; i++){
            doubledArray[i] = array1[i];
        }
        delete []array1;
        array1 = doubledArray;
    }
public:
    Array(){
        array1 = new int [1];
        capacity = 1;
        sizeOfArray = 0;
    }
    //step1: if size <= capacity then size index is empty . insert on that index and increase size
    //step2: else capacity *2 size er new array define korbo and ager array copy kore new tate boshabo
    //step2.1: size 1 increment korbo
    void Push_back(int element){
        if(sizeOfArray == capacity){
            increaseSize();

        }
        array1[sizeOfArray] = element;
        sizeOfArray++;
    }
    void printArray(){
        for(int i = 0; i< sizeOfArray; i++){
            cout<<array1[i]<<" ";
        }
        cout<<"\n";
    }
    int getElement(int index){
        if(index > sizeOfArray){
            cout<<"index is out of size";
            return -1;
        }
        return array1[index];
    }
//insert an element in an index
//step1: if capacity and size same then increase size
//step2:
    void insertElement(int index, int element){
        if(capacity == sizeOfArray){
            increaseSize();
        }
        for(int i = sizeOfArray ; i >= index; i--){
            array1[i+1] = array1[i];
        }

        array1[index] = element;
        sizeOfArray++;
    }


    //function = delete last element
    void deleteLastOne(){
        if(sizeOfArray == 0){
            cout<<"no element to delete";
            return;
        }
        sizeOfArray--;

    }
    //function = delete at specific index element
    //input = index
    //step1: check if the index exist
    //step2: oi index er poer index theke last index porjonto all element ek ghor kore agabe
    void deleteElement(int index){
        if(index > sizeOfArray){
            cout<<"index doesn't exist";

        }
        else{
            for(int i = index; i< sizeOfArray; i++){
            array1[i] = array1[i+1];
            };
            sizeOfArray--;
        }
    }


};
int main(){
    Array numbers;
    numbers.Push_back(4);
    numbers.Push_back(2);
    numbers.Push_back(5);
    numbers.Push_back(7);
    numbers.Push_back(8);
    numbers.insertElement(2, 10);
    numbers.deleteElement(3);
    numbers.deleteLastOne();
    numbers.printArray();
}
