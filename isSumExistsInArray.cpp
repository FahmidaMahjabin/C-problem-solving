#include<bits/stdc++.h>
//problem = Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x.
//input = array, target
//output = YES / NO
//step1: sort the array in ascending order with merge sort(nlogn)
//step2:take two pointers at p = 0 , q = array.size()-1
//step3:if pth +qth == target return YES
//step4:else, if (pth +qth)> target then q--
    //step4.1:else p++
//step5:do step3 to 4 while p< q
using namespace std;
int main(){
    vector<int>array1;
    int n, target, x;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>x;
        array1.push_back(x);
    }
    cin>>target;

}

void isPairExistsInArray(vector<int> numbers, int target){
    mergeSort(nummbers);

}
vector<int> mergeSort(vector<int> numbers){
    int length = numbers.size();
    if(length <= 1){
        return numbers;
    }
    else{

    }
}
