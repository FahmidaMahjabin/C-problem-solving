//problem = WAP that takes n integer numbers and an integer k, and checks if there are two numbers in the array which sums to k. You have to do it inside the Merge Sort function, divide and conquer fashion in O(nlogn).
//input = array, target
//output = YES/NO
#include<bits/stdc++.h>
using namespace std;
int isSumExistsInArray(vector<int> &numbers, int target);
vector<int> mergeSort(vector<int> &numbers);
vector<int> mergeTwoSortedArray( vector<int> &array1, vector<int> &array2);
int main(){
    int n, target, x;
    cin>>n;
    vector<int> array1;
    for(int i = 0; i<n; i++){
        cin>>x;
        array1.push_back(x);
    }
    for(int i = 0; i<n; i++){
        cout<<array1[i]<<" ";
    }
    cin>>target;
    cout<<isSumExistsInArray(array1, target)<<"\n";
    if(isSumExistsInArray(array1, target)){
        cout<<"YES";
    }
    else{
        cout<<"N0";
    }
//    vector<int> mergedSort ;
//    mergedSort = mergeSort(array1);
//    for(int i = 0; i< mergedSort.size(); i++){
//        cout<<mergeSort[i]<<" ";
//    }
    return 0;
}


//problem = if two number's sum is equal to a target value then print yes else no
//input = array, target value
//output = nothing, print yes/no
//step1: sort the array in an ascending order
//step2:take two pointers as p, q at 1st index and last index
//step3: sum the pth and qth number and compare with target
//step4:if (pth +qth) == target then return 1
//step5:if(pth + qth) > target then decrease q--
//step6: else increase p++
//step7: if nothing then return 0
int isSumExistsInArray(vector<int> &numbers, int target){
    numbers = mergeSort(numbers);
    int p = 0;
    int q = numbers.size() - 1;
    while(p < q){
        //cout<<"value of p"<<p<<"value of q:"<<q<<"\n";
        if(numbers[p] + numbers[q] == target){
            return 1;
        }
        else if(numbers[p] + numbers[q] > target){
            q--;
        }
        else{
            p++;
        }
    }
    return 0;

}
//step0:if array has 0 or 1 element then it's aready sorted so return array, else:
    //step1: divide the array into two
    //step2: leftArray = index 0 to mid and do step0
    //step3: rightArray = index mid to last index step0
    //step4: sort the two sorted array leftArray and rightArray and return
vector<int> mergeSort(vector<int> &numbers){
    if(numbers.size() <=1 ){
        return numbers;
    }
    else{
        int mid = numbers.size() / 2;
        vector<int> leftArray, rightArray;
        for(int i = 0; i<mid; i++){
            leftArray.push_back(numbers[i]);
        }
        for(int i = mid; i< numbers.size(); i++){
            rightArray.push_back(numbers[i]);
        }
        leftArray = mergeSort(leftArray);
        rightArray = mergeSort(rightArray);
        return mergeTwoSortedArray(leftArray, rightArray);
    }
}
//step1: take two pointers p = 0 and q = 0
//step2: compare pth and qth element if array1[p] <= array2[q] then append pth elemnt and increment p
//step3:else append qth element and increment q
//step4: do step2 till the length of array1 and array2
//step5: if any elements still in array1 then append all the element
//step6: if any elements in array2 then append all the element
vector<int> mergeTwoSortedArray( vector<int> &array1, vector<int> &array2){
    int p = 0, q = 0;
    int array1Elements = array1.size() -1;
    int array2Elements = array2.size() -1 ;
    vector<int> mergedArray;
    while(p<= array1Elements && q <= array2Elements){
        if(array1[p] <= array2[q]){
            mergedArray.push_back(array1[p]);
            p++;
        }
        else{
            mergedArray.push_back(array2[q]);
            q++;
        }
    }
    while(p <= array1Elements){
        mergedArray.push_back(array1[p]);
        p++;
    }
    while(q <= array2Elements){
        mergedArray.push_back(array2[q]);
        q++;
    }
//    for(int i = 0; i< mergedArray.size(); i++){
//        cout<<mergedArray[i]<<" ";
//    }
    return mergedArray;
}
