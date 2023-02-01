#include<iostream>
#include<vector>
using namespace std;
//input = two array
//output = one array having common elemnt of two arrays
//step1: ekta array er ekta kore element nibo and second array er every element er sathe compare kore dekhbo same kina
//step2: same hole print korbo
void getIntersectionOfTwoArray(vector<int>& array1, vector<int>& array2);
int main(){
    int n, m, userInput;
    cin>>n;
    vector<int>array1;
    for(int i = 0; i<n; i++){
        cin>>userInput;
        array1.push_back(userInput);
    }
    cin>>m;
    vector<int>array2;
    for(int i = 0; i<m; i++){
        cin>>userInput;
        array2.push_back(userInput);
    }

    getIntersectionOfTwoArray(array1, array2);
}
void getIntersectionOfTwoArray(vector<int>& array1, vector<int>& array2){
    for(int i = 0; i< array1.size(); i++){
        //cout<<"array1[i]:"<<array1[i]<<"\n";
        for(int j = 0; j< array2.size(); j++){
            //cout<<"array2[j]:"<<array2[j]<<"\n";
            if(array1[i] == array2[j]){
                cout<< array1[i]<< " ";
                break;
            }
        }
    }
}
