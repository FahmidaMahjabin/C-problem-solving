//step1: lowerIndex = 0, upperIndex = n-1
//step2: get midIndex
//step3: if mid element is equal to the searched element then return the index
//step4: if searchedElement > mid element then lowIndex = midIndex + 1 to highIndex and do the same to step2 to all
//step5: if searchedElement < mid element then lowerIndex to highIndex = midIndex -1 and do the same to step2 to all
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> array1, int searchedItem);
int main(){
    int n, k;
    cin>>n>>k;
    vector<int>sortedArray(n);
    for(int i = 0; i< n; i++){
        cin>>sortedArray[i];
    }
    cout<<binarySearch(sortedArray, 1);

}

int binarySearch(vector<int> array1, int searchedItem){
    int lowerIndex = 0;
    int upperIndex = array1.size() - 1;
    while(lowerIndex <= upperIndex){
        int midIndex = (lowerIndex + upperIndex) / 2;
        int midElement = array1[midIndex];
        if(midElement == searchedItem){

            return midIndex;
        }
        else if(midElement > searchedItem){
            upperIndex = midIndex -1;

        }
        else{
            lowerIndex = midIndex + 1;
        }
    }
    return -1;


}
