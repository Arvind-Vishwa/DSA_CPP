// pivot index M.Imp
// using a Binary Search
#include <iostream>
using namespace std;

void pivotIndex(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int index = -1;
    while (s <= e)
    {
        if(mid-1 < size-1 && arr[mid] > arr[mid+1]){
            cout<< mid<<endl;
        }
        if(mid-1 >=0 && arr[mid] < arr[mid-1]){
            cout<<mid-1;
        }
        //kab left or right
        if(arr[s] > arr[mid]){
            e =mid-1;
        }
        else {
            //right
            s=mid+1;
        }
        mid =s+(e-s)/2;
}
}
int main()
{
    int arr[] = {50, 60, 70, 10, 20, 30, 40};
    int size = 7;
    pivotIndex(arr, size);
}