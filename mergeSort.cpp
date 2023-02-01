//problem = given a list, make is sort
//input = vector
//output = vector
//step1: if vector has 0 or 1 element then return the vector
//step2: else , divide the vector into two vector
//step3:do the step1 for left part vector
//step4: do the same as step1 for right part of the vector
//step5: merge the left and right part

#include<bits/stdc++.h>
using namespace std;
vector<int> mergeSort(vector<int>& numbers);
vector<int> mergeTwoSortedArray(vector<int> &array1, vector<int>& array2);
int main(){
    vector<int>array1;
    int n, x;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>x;
        array1.push_back(x);
    }
    vector<int> mergedArray = mergeSort(array1);
    for(int i = 0; i< mergedArray.size(); i++){
        cout<<mergedArray[i]<<" ";
    }
    return 0;
}

vector<int> mergeSort(vector<int>& numbers){
    int length = numbers.size();
    if(length <= 1){
        return numbers;
    }
    else{
        int mid = numbers.size() / 2;
        vector<int> leftArray, rightArray;
        for(int i = 0; i<mid; i++){
            leftArray.push_back(numbers[i]);
        }
        for(int i = mid; i<length; i++){
            rightArray.push_back(numbers[i]);
        }
        leftArray = mergeSort(leftArray);
        rightArray = mergeSort(rightArray);

        return mergeTwoSortedArray(leftArray, rightArray);
    }
}

//function = get median of a vector
//input = vector pointer
//output = index
//step1:if length even then divide it to get mid
    //step2: median = mid and mid-1 er average
//step3:else median = mid index element
vector<int> mergeTwoSortedArray(vector<int> &array1, vector<int>& array2){
    //cout<<"in the mergeTwoSortedArray";
    int p = 0, q = 0;
    vector<int> mergedArray;
    while(p < array1.size() && q < array2.size()){
        if(array1[p] <= array2[q]){
            //cout<<"array1[p] is added:"<<array1[p]<<"\n";
            mergedArray.push_back(array1[p]);
            p++;
        }
        else{
            //cout<<"array2[q] is added:"<<array2[q]<<"\n";
            mergedArray.push_back(array2[q]);
            q++;
        }
    }
    if(p < array1.size()){
        for(int i = p; i< array1.size(); i++){
            mergedArray.push_back(array1[i]);
        }
    }
    if(q < array2.size()){
        for(int i = q; i< array2.size(); i++){
            mergedArray.push_back(array2[i]);
        }
    }

    return mergedArray;

}
