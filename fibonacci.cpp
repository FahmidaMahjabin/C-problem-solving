//step1: jodi n == 0 then 0
//step2: if n == 1 then 1
//step3: nthFibonacci = fibo(n-1) + fibo(n-2)
#include<iostream>
using namespace std;

int fibonacci(int n);
int called = 0;
int nthFibonacci[100];
int main(){
    int n;
    cin>>n;
    cout<<"nth fibonacci: "<<fibonacci(n)<<"\n";

    cout<<"called:"<<called<<"\n";
}

int fibonacci(int n){

//  int i;
//    for(i = 0; i<n; i++){
//        cout<<i<<"th fibonacci"<<nthFibonacci[i]<<"\n";
//    }
    called++;
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    if(nthFibonacci[n] != 0)
        {
            //cout<<n<<"th fibonacci:"<<nthFibonacci[n]<<"\n";

            return nthFibonacci[n];
        }

    else{
        nthFibonacci[n] = fibonacci(n-1) + fibonacci(n-2);

        return nthFibonacci[n];
    }

}
