// Find Last occurence
// Store and compute Binary Search
#include<iostream>
using namespace std;

void lastOccur(int a[],int size,int &ansIndex,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s <= e){
        if(a[mid] == target){
            // store and compute
            ansIndex=mid;
            s=mid+1;
        }
        else if(target > a[mid]){
            e=mid-1;
        }
        else
        s=mid+1;
        mid = s+(e-s)/2;
    }
    cout<<"Last Occurr. Index :"<<ansIndex;
}
int main(){
    int a[]={10,20,20,20,20,20,20,30};
    int size=8;
    int target=20;
    int ansIndex=-1;
    lastOccur(a,size,ansIndex,target);
    return 0;
}