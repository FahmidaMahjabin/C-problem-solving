//list theke ekta kore element nibo and exact position e boshabo.
//step1:list er second element nibo , compare that element with the first one
//step2: if second < first then swap
//step3: do the step 1 and 2 for all of the elements

#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> array1);
int main(){
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i = 0; i<n; i++){
        cin>>numbers[i];
    }

    insertionSort(numbers);
}

void insertionSort(vector<int> array1){
    for(int i = 1; i< array1.size(); i++){
            int currentIndex = i;
            while(currentIndex > 0){
                if(array1[currentIndex] < array1[currentIndex-1]){
                    swap(array1[currentIndex], array1[currentIndex-1]);
                    currentIndex--;
                }
                else{
                    break;
                }
            }

    }
    for(int i = 0; i< array1.size(); i++){
        cout<<array1[i]<<" ";
    }
}
