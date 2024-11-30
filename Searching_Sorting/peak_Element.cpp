// Peak mountain element
// imp
/*
#include <iostream>
using namespace std;
void peakIndex(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
            e = mid;

        mid = s + (e - s) / 2;
    }

    cout << "peak index :" << mid;
}
int main()
{
    int arr[] = {2, 3, 4, 1};
    int size = 4;
    peakIndex(arr, size);
}
*/

// using a store and compute in Binary Search

#include <iostream>
using namespace std;

void peakIndex(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int store = -1;
    while (s <= e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            store = mid;
            s = mid + 1;
        }
        else
        {
            store = mid;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << store;
}
int main()
{
    int arr[] = {10, 40, 90, 80, 70, 60, 50, 30, 20};
    int size = 9;
    peakIndex(arr, size);
    return 0;
}
