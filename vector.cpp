#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> array;
    int i;
    for(i = 0; i< 6; i++){
        array.push_back(i+3);
        printf("%dth element: %d\n",i,  array[i]);
        printf("%d\n", array.size());
    }
    vector<int> array2 = {10, 2, 1, 5, 9};
    sort(array2.begin(), array2.end());
    for(i = 0; i< array2.size(); i++){
        cout<<array2[i]<<endl;
    };
    vector<int>v(10);
    for(i = 0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }

}
