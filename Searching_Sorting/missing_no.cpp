// Missing no using Binary Search
// m-1 sum and difference
#include<iostream>           //rewrite the code
using namespace std;

void missing(int arr[],int size){
    int sumEle=0;
    int sum=0;
    for(int i=0;i<size;i++){
        sumEle = sumEle+arr[i];
    }
    for(int i=0;i<size;i++){
        sum=sum+i;
    }
    int store =sum-sumEle;
    cout<<store;

}
int main(){
    int arr[]={3,0,1};
    int size=3;
    missing(arr,size);

    return 0;
}